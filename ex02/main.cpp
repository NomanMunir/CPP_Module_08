/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:33:10 by ael-khni          #+#    #+#             */
/*   Updated: 2024/05/16 14:17:25 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
int main()
{
{
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
  std::cout << *it << std::endl;
  ++it;
  }
  std::stack<int> s(mstack);
  std::cout << std::endl;
}
{
  std::list<int> mstack;
  mstack.push_back(5);
  mstack.push_back(17);
  std::cout << mstack.back() << std::endl;
  mstack.pop_back();
  std::cout << mstack.size() << std::endl;
  mstack.push_back(3);
  mstack.push_back(5);
  mstack.push_back(737);
  mstack.push_back(0);
  std::list<int>::iterator it = mstack.begin();
  std::list<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
  std::cout << *it << std::endl;
  ++it;
  }
  std::list<int> s(mstack);
}
return 0;
}