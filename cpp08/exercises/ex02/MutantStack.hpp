/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:23:58 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/12 10:39:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANT_
# define _MUTANT_

# include <list>
# include <iterator>
# include <stack>

// stack is a container adaptor, not really a container, it's a basically a view
// over another container (like deque, vector or list), restricting access so we can
// only push, pop and see the top - no iterating. (default 'deque')
// however, inside stack, there's a protected member (which is container 'c') which has iterator
// so by ::container_type we can access the real type of the underlying container
// then by ::iterator we can access iterator of that container

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		~MutantStack();
		MutantStack(MutantStack const &src);
		MutantStack	&operator=(MutantStack const &rhs);
		
		typedef typename std::stack<T>::container_type::iterator		iteratoR;
		typedef typename std::stack<T>::container_type::const_iterator	const_iteratoR;
		
		iteratoR		begin(void);
		const_iteratoR	begin(void) const;
		iteratoR		end(void);
		const_iteratoR	end(void) const;
		
};

# include "MutantStack.tpp"

#endif