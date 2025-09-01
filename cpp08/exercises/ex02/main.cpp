/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:23:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/12 20:51:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << ">>-- Test in subject --<<" << std::endl;
	MutantStack<int>	mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iteratoR it = mstack.begin();
	MutantStack<int>::iteratoR ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << ">>-- replace MutantStack by std::list --<<" << std::endl;
	std::list<int>	lst;
	
	lst.push_back(5);
	lst.push_back(17);
	
	std::cout << lst.back() << std::endl;
	
	lst.pop_back();
	
	std::cout << lst.size() << std::endl;
	
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	
	std::list<int>::iterator it2 = lst.begin();
	std::list<int>::iterator ite2 = lst.end();
	
	++it2;
	--it2;
	
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::list<int> s2(lst);
	return 0;
}
