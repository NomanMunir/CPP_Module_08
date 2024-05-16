#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
template <class T>

int easyfind(T findFrom, int toFind)
{
  typename T::iterator it = std::find(findFrom.begin(), findFrom.end(), toFind);
  if (it == findFrom.end())
  {
    std::cout << toFind << " not found!" << std::endl;
    return (1);
  }
  else
    std::cout << "First occurrence of " << toFind << " is at index " <<
      std:: distance(findFrom.begin(), it) << std::endl;
  return (0);
}

#endif