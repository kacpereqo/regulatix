//
// Created by remza on 16.10.2024.
//

#ifndef FILE_MANAGER_HPP
#define FILE_MANAGER_HPP

#include "utils/units.hpp"
#include <fstream>
#include <string>

class FileManager {
private:
    std::string filename = "output.bin";
    std::fstream file;

public:
    FileManager() = default;

    template <typename T>
    T& open() {
        this->file.open(this->filename);
        return this->file;
    }

    template <typename T>
    void write(const T& data) {
        this->file.write(reinterpret_cast<const char*>(&data), sizeof(data));
    }

};

#endif //FILE_MANAGER_HPP
