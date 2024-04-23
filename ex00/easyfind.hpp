#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
template <class T>

int easyfind( T arr, int value)
{
  typename T :: iterator it = std::find(arr.begin(), arr.end(), value);
  if (it != arr.end())
    return (0);
  return (1);
}

#endif