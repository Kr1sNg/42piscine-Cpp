
#include "account.h"

Account::Account(const string& a_name, unsigned long a_nr, double a_state)
{
	setName(a_name);
	setNr(a_nr);
	setState(a_state);
	return ;
}

Account::~Account(void)
{
	return ;
};

const string&	Account::getName(void) const
{
	return (this->_name);
};

void	Account::setName(const string& s)
{
	this->_name = s;
	return ;
};

unsigned long	Account::getNr(void) const
{
	return (this->_nr);
};

void	Account::setNr(unsigned long n)
{
	this->_nr = n;
};

double	Account::getState(void) const
{
	return (this->_state);
};

void	Account::setState(double x)
{
	this->_state = x;
};

void	Account::display(void) const
{
	cout << "Account holder: " << getName() << endl;
	cout << "Account number: " << getNr() << endl;
	cout << "Account balance: " << getState() << endl;
	cout << endl;
};
