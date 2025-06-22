/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:17:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/22 22:43:10 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:0;amount:42;created
Account::Account(int initial_deposit): 	_accountIndex(_nbAccounts++),
										_amount(initial_deposit),
										_nbDeposits(0),
										_nbWithdrawals(0)
{
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount
		 << ";created" << endl;
		 
}

Account::Account(void)
{
	return ;
}

// [19920104_091532] index:0;amount:47;closed
Account::~Account(void)
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount
		 << ";closed" << endl;
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

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	cout << "accounts:" << Account::getNbAccounts()
		 << ";total:" << Account::getTotalAmount()
		 << ";deposits:" << Account::getNbDeposits()
		 << ";withdrawals:" << Account::getNbWithdrawals() << endl; 
};

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex
		 << ";p_amount:" << _amount
		 << ";deposit:" << deposit;
		 
	_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	_amount += deposit;
	Account::_totalAmount += deposit;
	
	cout << ";amount:" << _amount
		 << ";nb_deposits:" << _nbDeposits << endl;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex
		 << ";p_amount:" << _amount
		 << ";withdrawal:";
	if (withdrawal <= checkAmount())
	{
		_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		
		cout << withdrawal
			 << ";amount:" << _amount
			 << ";nb_withdrawals:" << _nbWithdrawals << endl;
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

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	cout << "index:" << _accountIndex
		 << ";amount:" << _amount
		 << ";deposits:" << _nbDeposits
		 << ";withdrawals:" << _nbWithdrawals << endl;
};

// [19920104_091532]
void	Account::_displayTimestamp( void )
{
	time_t	now = time(0); 			// gives the current time in seconds since the Unix epoch
	tm 		*ymd = localtime(&now); // convert time_t to local time
	
	cout << "[" << setfill('0') << setw(4) << 1900 + ymd->tm_year 
		 << setw(2) << 1 + ymd->tm_mon
		 << setw(2) << ymd->tm_mday << "_"
		 << setw(2) << ymd->tm_hour
		 << setw(2) << ymd->tm_min
		 << setw(2) << ymd->tm_sec << "] ";
};
