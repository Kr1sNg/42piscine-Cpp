/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:13:21 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/03 19:40:03 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BTCEXC_
# define _BTCEXC_

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>  // atof
#include <cstdio>   // sscanf
#include <exception>
#include <iomanip>	// setprecision
#include <climits>

class	BitcoinExchange
{
	private:
		std::map<std::string, double>	_db;
		
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange	&operator=(BitcoinExchange const &rhs);
		
		bool	isLeapYear(int year);
		bool	validLine(char const *line);
		bool	hasNoSpace(std::string &s);
		
	public:
		BitcoinExchange(void);
		~BitcoinExchange();
		
		void	loadDatabase(char const *path);
		void	execute(char const *input);

		void	printDatabase(void);
		
};

#endif