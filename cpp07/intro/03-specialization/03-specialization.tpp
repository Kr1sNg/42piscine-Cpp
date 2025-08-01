/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-specialization.tpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:56:06 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 23:52:51 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T, typename U>
class Pair
{
	public:
		Pair<T, U>(T const &lhs, U const &rhs): _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Generic template" << std::endl;
			return ;
		}
		~Pair<T, U>(void) {}
		
		T const &fst(void) const { return this->_lhs; }
		U const &snd(void) const { return this->_rhs; }
	
	private:
		T const	&_lhs;
		U const &_rhs;

		Pair<T, U>(void);
		
};

/// specialization 1

template <typename U>
class Pair<int, U>
{
	public:
		Pair<int, U>(int lhs, U const &rhs): _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Int partial template" << std::endl;
			return ;
		}
		~Pair<int, U>(void) {}
		
		int		fst(void) const { return this->_lhs; }
		U const &snd(void) const { return this->_rhs; }
	
	private:
		int		_lhs;
		U const &_rhs;

		Pair<int, U>(void);
};

// Specialization 2

template<>
class Pair<bool, bool>
{
	public:
		Pair<bool, bool>(bool lhs, bool rhs)
		{
			std::cout << "bool/bool template" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;
			this->_n |= static_cast<int>(rhs) << 1;
			return ;
		}
		~Pair<bool, bool>(void) {}
		
		bool	fst(void) const { return this->_n & 0x01; }
		bool	snd(void) const { return this->_n & 0x02; }
	
	private:
		int		_n;

		Pair<bool, bool>(void);
};

template <typename T, typename U>
std::ostream	&operator<<(std::ostream &o, Pair<T, U> const &p)
{
	o << "Pair( " << p.fst() << ", " << p.snd() << " )";
	return (o);
}

std::ostream	&operator<<(std::ostream &o, Pair<bool, bool> const &p)
{
	// With std::boolalpha, bool prints as 'true' or 'false'.
	o << std::boolalpha << "Pair( " << p.fst() << ", " << p.snd() << " )";
	return (o);
}

