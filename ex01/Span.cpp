#include "Span.hpp"

Span::Span(const unsigned int n) : _n(n) {}
Span::Span(const Span &other) : _n(other._n), _v(other._v) {}
Span &Span::operator=(const Span &other)
{
  if (this != &other)
  {
    _n = other._n;
    _v = other._v;
  }
  return *this;
}
Span::~Span() {}

void Span::addNumber(int n)
{
  if (_v.size() > _n)
    throw Span::FullSpanException();
  _v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
  size_t numToAdd = std::distance(begin, end);
  if (numToAdd > _n)
    throw Span::RangeSpanException();
  _v.insert(_v.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
  if (_v.size() <= 1)
    throw NoSpanException();
  int min = std::numeric_limits<int>::max();
  for (std::vector<int>::iterator i = _v.begin(); i != _v.end(); i++)
  {
    for (std::vector<int>::iterator j = i + 1; j != _v.end(); j++)
    {
      if (std::abs(*i - *j) < min)
        min = std::abs(*i - *j);
    }
  }
  return (min);
}

unsigned int Span::longestSpan()
{
    if (_v.size() <= 1)
        throw NoSpanException();
    return (*std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end()));
}

