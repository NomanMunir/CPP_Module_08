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
  if (easyfind(vec, 5))
      return (1);
  return (0);
}
