/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 08:34:46 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/11 21:13:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_
# define _SPAN_

# include <iostream>
# include <stdexcept>
# include <algorithm>	// max_element, min_element
# include <vector>
# include <iterator>	// distance, begin, end

class Span
{
	private:
		unsigned int		_capaMax;
		std::vector<int>	_arrInt;
		
	public:
		Span(unsigned int N = 0);
		~Span();
		Span(Span const &src);
		Span	&operator=(Span const &rhs);
		
		void	addNumber(int value);
		
		int	shortestSpan(void) const;
		int	longestSpan(void) const;
		
		template <typename Iterator>
		void	addNumbers(Iterator begin, Iterator end);

		void	displayArr(void) const;

};

template <typename Iterator>	// used for any iterator type
void	Span::addNumbers(Iterator begin, Iterator end)
{
	if (_arrInt.size() + std::distance(begin, end) > _capaMax)
		throw (std::out_of_range("Reach the max capacity"));
	_arrInt.insert(_arrInt.end(), begin, end);
}

#endif
