/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:17:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/22 08:48:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.hpp"

using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): 	_accountIndex(_nbAccounts++),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amout:" << _amount
		 << ";created" << endl;
		 
}

Account::Account(void)
{
	cout << "created" << endl;
}

Account::~Account(void)
{
	cout << "closed" << endl;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
};

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
};

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
};

void	Account::displayAccountsInfos( void )
{
	cout << "[time] accounts:" << Account::getNbAccounts()
		 << ";total:" << Account::getTotalAmount()
		 << ";deposits:" << Account::getNbDeposits()
		 << ";withdrawals:" << Account::getNbWithdrawals() << endl; 
};

void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	_amount += deposit;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal <= checkAmount())
	{
		_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		cout << "refused" << endl;
		return (false);
	}
};
int		Account::checkAmount( void ) const
{
	return (_amount);
};

void	Account::displayStatus( void ) const
{
	cout << "display Status" << endl;
};

void	Account::_displayTimestamp( void )
{
	cout << "[timestamp]";
};