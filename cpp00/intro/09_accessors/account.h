// Class Account with set and get methods

#ifndef _ACCOUNT_
# define _ACCOUNT_

# include <iostream>
# include <string>
using namespace std;

class Account
{
	private:
		string			_name;
		unsigned long	_nr;
		double 			_state;

		void			setName(const string& s);
		void			setNr(unsigned long n);
		void			setState(double x);


	public:
		Account(const string& a_name = "X", unsigned long a_nr = 1111111L, double a_state = 0.0);
		~Account(void);

		const string& 	getName(void) const;
		

		unsigned long	getNr(void) const;
		

		double			getState(void) const;
		

		void			display(void) const;
};


#endif

