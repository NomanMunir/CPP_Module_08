#include "easyfind.hpp"
int main()
{
  std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(23);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
  if (easyfind(vec, 1))
    std::cout<< "Could not find value: " << 3 << std::endl;
  else
    std::cout << "Value found!" <<std::endl;
  return (0);
}