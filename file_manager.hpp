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
    FileManager() {
        this->file.open(this->filename, std::ios::out | std::ios::binary);
    }
};

#endif //FILE_MANAGER_HPP
