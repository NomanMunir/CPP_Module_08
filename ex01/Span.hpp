#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>
#include <climits>
#include <limits>

class Span
{
private:
  unsigned int _n;
  std::vector<int> _v;
  Span();
public:
  Span(const unsigned int n);
  Span(const Span &other);
  Span &operator=(const Span &other);
  ~Span();

  void addNumber(int n);
  void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
  unsigned int shortestSpan();
  unsigned int longestSpan();

  class FullSpanException : public std::exception
  {
    virtual const char *what() const throw() { return "Span is full";};
  };

  class RangeSpanException : public std::exception
  {
    virtual const char *what() const throw() { return "Out of range!";};
  };

  class NoSpanException : public std::exception
  {
    virtual const char *what() const throw() { return "No span to find";};
  };
};

#endif // SPAN_HPP