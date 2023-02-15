#include <fstream>
#include <string>
#include <vector>

std::ifstream input_file("arquivo.csv");
std::ofstream output_file("arquivo.bin", std::ios::out | std::ios::binary);
std::string line;
std::vector<int> data;

while (std::getline(input_file, line)) {
  int value;
  std::stringstream ss(line);
  while (std::getline(ss, value, ',')) {
    data.push_back(std::stoi(value));
  }
}

output_file.write((char*)&data[0], data.size() * sizeof(int));