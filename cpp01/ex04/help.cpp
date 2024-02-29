#include "include.hpp"

FileReplacer::FileReplacer(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {}

void FileReplacer::replaceOccurrences() {
    std::ifstream input(filename);
    if (!input.is_open()) {
        std::cerr << "Error: Unable to open input file: " << filename << std::endl;
        return;
    }

    std::ofstream output(filename + ".replace");
    if (!output.is_open()) {
        std::cerr << "Error: Unable to create output file: " << filename + ".replace" << std::endl;
        input.close();
        return;
    }

    std::string line;
    while (getline(input, line)) {
        replaceString(line, s1, s2);
        output << line << std::endl;
    }

    std::cout << "Replacement completed. Check " << filename + ".replace" << " for the result." << std::endl;

    input.close();
    output.close();
}

void FileReplacer::replaceString(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}
