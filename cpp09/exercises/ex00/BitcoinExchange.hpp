/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:13:21 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/31 19:50:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BTCEXC_
# define _BTCEXC_

#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>  // atof
#include <cstdio>   // sscanf

int		loadData(std::map<std::string, float> &database);
void	printMap(std::map<std::string, float> &database);
bool	validLine(char const *line);

#endif