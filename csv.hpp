
#ifndef CSV_HPP
#define CSV_HPP

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include "utils/units.hpp"

class CSVFactory {
public:
    void write(const std::string& filename, const std::vector<std::string>& headers, const std::vector<std::vector<f32>>& data);
};

#endif //CSV_HPP
