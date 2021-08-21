//Highest and Lowest
//numeric_limits<int>::max() -> maximum possible int
//numeric_limits<int>::min() -> minimum possible int
//stringstrem -> converst string to stream
//stream << var -> serialisation || stream >> var -> deserialisation

#include <string>
#include <sstream>
#include <limits>

std::string highAndLow(const std::string& numbers){
  std::stringstream ss(numbers);
  int temp, min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
  while (ss >> temp) {
    min = (temp < min) ? temp : min;
    max = (temp > max) ? temp : max;
  };
  return std::to_string(max) + " " + std::to_string(min);
}
