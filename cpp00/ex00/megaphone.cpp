#include <iostream>

using namespace std; // make names from std visible without std::

int main(int argc, char *argv[])
{
	int		i = 1;
	int 	j;
	int		len;
	char 	c;

	if (argc < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (i < argc)
	{
		len = strlen(argv[i]);
		j = 0;
		while (j < len)
		{
			c = toupper(argv[i][j]);
			cout << c;
			j++;
		}
		i++;
	}
	cout << "\n";
	return (0);
}