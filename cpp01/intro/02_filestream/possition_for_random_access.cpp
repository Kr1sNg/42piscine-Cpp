/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possition_for_random_access.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:24:48 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/25 11:27:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

class IndexEntry
{
	private:
		long	key;
		long	recNr;
		
	public:
		IndexEntry(/* args */);
	~IndexEntry();
};

IndexEntry::IndexEntry(/* args */)
{
}

IndexEntry::~IndexEntry()
{
}
