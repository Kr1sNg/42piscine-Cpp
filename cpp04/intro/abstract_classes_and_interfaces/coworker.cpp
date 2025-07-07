/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coworker.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 10:55:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/06 22:09:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

class	Coworker	//-> has pure virtual => abstract class => can't create object
{
	protected:
		std::string	_name;
		
	public:
		Coworker(std::string const &s = "")
		{
			_name = s; 
		}
		virtual ~Coworker(void)
		{
		
		}
		virtual	Coworker	&operator=(const Coworker &rhs) // virtual assignment
		{
			if (this != &rhs)
				_name = rhs._name;
			return (*this);
		}
		
		std::string const &getName(void) const
		{
			return (_name);
		}
		
		void	setName(const std::string &n)
		{
			_name = n;
		}

		virtual void	display(void) const
		{
			std::cout << "Coworker: " << _name << " " << income() << std::endl;
		}
		
		virtual double	income(void) const = 0; // pure virtual -> don't need to perform anything 
		
};

class Laborer: public Coworker
{
	private:
		double	_wages;
		int		_hr;
		
	public:
		Laborer(std::string const &s = "", double w = 0.0, int h = 0): Coworker(s), _wages(w), _hr(h)
		{
			return ;
		}
		
		double	getWages(void) const
		{
			return (_wages);
		}

		void	setWages(double w)
		{
			_wages = w;
		}

		int		getHr(void) const
		{
			return (_hr);
		}
		
		void	setHr(int h)
		{
			_hr = h;
		}

		void	display(void) const
		{
			std::cout << "Laborer: " << _name << " " << income() << std::endl;
		}
		
		double	income(void) const
		{
			return (_wages * _hr);
		}

		Laborer	&operator=(Coworker const &rhs)
		{
			if (this != &rhs)
			{
				Coworker::operator=(rhs);
				_wages = 0.0;
				_hr	= 0;
			}
			return (*this);
		}
		
		Laborer	&operator=(Laborer const &rhs)
		{
			if (this != &rhs)
			{
				Coworker::operator=(rhs);
				_wages = rhs._wages;
				_hr = rhs._hr;
			}
			return (*this);
		}
		
};

class Employee: public Coworker
{
	private:
		double	_salary;

	public:
		Employee(std::string const &s = "", double sa = 0.0): Coworker(s), _salary(sa)
		{
			return ;
		}

		double	getSalary(void) const
		{
			return (_salary);
		}
		
		void	setSalary(double sa)
		{
			_salary = sa;
		}

		void	display(void) const
		{
			std::cout << "Employee: " << _name << " " << getSalary() << std::endl;
		}
		
		double	income(void) const
		{
			return (_salary);
		}

		Employee	&operator=(Coworker const &rhs)
		{
			if (this != &rhs)
			{
				Coworker::operator=(rhs);
				_salary = 0.0;
			}
			return (*this);
		}
		
		Employee	&operator=(Employee const &rhs)
		{
			if (this != &rhs)
			{
				Coworker::operator=(rhs);
				_salary = rhs._salary;
			}
			return (*this);
		}
};

int	main(void)
{
	Coworker	*felPtr[2];
	
	felPtr[0] = new Laborer("Young, Neil", 45., 40);
	felPtr[1] = new Employee("Smith, Eve", 3850.0);

	for (int i = 0; i < 2; ++i)
	{
		felPtr[i]->display();
		std::cout << "The income of " << felPtr[i]->getName() << " : " << felPtr[i]->income() << std::endl;
	}
	
	for (int i = 0; i < 2; ++i)
	{
		delete felPtr[i];
	}
	
	return (0);
}