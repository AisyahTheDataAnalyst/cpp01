#include <iostream> // std::cout
#include <fstream> // std::ifstream, std::ofstream
#include <string> // std::string, .length(), .substr(), .find(), .rdbuf()
#include <sstream> // std::ostringstream, .str()

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./program <filename> <s1> <s2>\n";
        return 1;
    }
   
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty\n";
        return 1;
    }

    std::ifstream input(filename.c_str());        // open to read, .c_str() converts std::string to const char* since C++98 streams don’t accept std::string directly
    if (!input)
    {
        std::cerr << "Error open file to read\n";
        return 1;
    }

    std::ostringstream buffer;                    // ostringstream = strictly for output and only write into it, stringstream = for both input/output
    buffer << input.rdbuf();                      // read whole file - it accumulates the data in memory
    std::string content = buffer.str();           // .str() fn returns all the accumulated characters as a std::string
    
    size_t pos = 0;                                            // start searching from beginning
    while ((pos = content.find(s1, pos)) != std::string::npos) // pos is the position (index) where the first s1 appears in content. if not found, it returns std::string::npos a special const used with .find()
    {
        content = content.substr(0, pos)                       // everything before s1, substr(start, length)
                    + s2                                       // the replacement string
                    + content.substr(pos + s1.length());       // pos is where s1 starts, so it skips exactly the right number of characters of s1, length() return num of chars excluding null terminator, since C++ std::string isn’t null-terminated internally like C-strings
        pos += s2.length();                                    // skip replaced part
    }
    
    std::ofstream output((filename + ".replace").c_str());  // open to write , .c_str() converts std::string to const char* since C++98 streams don’t accept std::string directly
    if (!output)
    {
        std::cerr << "Error: cannot open file to write\n";
        return 1;
    }
    output << content;

    // closing
    input.close();
    output.close();

    return 0;
}