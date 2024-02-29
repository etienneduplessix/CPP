#ifndef INCLUDE_HPP
#define INCLUDE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Filer {
public:
    FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2);

    void replaceOccurrences();

private:
    void replaceString(std::string& str, const std::string& from, const std::string& to);

    std::string filename;
    std::string s1;
    std::string s2;
};

#endif 
