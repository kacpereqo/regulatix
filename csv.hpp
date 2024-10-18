
#ifndef CSV_HPP
#define CSV_HPP

#include <fstream>
#include <string>
#include <vector>
#include "utils/units.hpp"

inline std::string join(const std::vector<std::string>& data,const char delimiter) {
    std::string result;
    for (index i = 0; i < data.size(); i++) {
        result += data[i];
        if (i != data.size() - 1)
            result += delimiter;
    }

    return result;
}

inline std::string join(const std::vector<f32>& data, const char delimiter) {
    std::string result;
    for (index i = 0; i < data.size(); i++) {
        result += std::to_string(data[i]);
        if (i != data.size() - 1)
            result += delimiter;
    }

    return result;
}

class CSVFactory {
public:
    CSVFactory() = default;
    void static write(const std::string &filename,const  std::vector<std::string>& headers, std::vector<std::vector<f32>>& data);
};

void inline CSVFactory::write(const std::string &filename, const std::vector<std::string>& headers, std::vector<std::vector<f32>>& data) {
    std::ofstream file(filename, std::ios::binary | std::ios::out);


    file << join(headers, ',');
    file << '\n';

    for (auto& row: data) {
        file << join(row, ',');
        file << '\n';
    }

    file.close();
}

#endif //CSV_HPP
