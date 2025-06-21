
#include "account.h"

int	main(void)
{
	Account	giro("Cheers, Mary", 123456, -1200.99),
			save("Lucky, Luck");
	
	giro.display();
	save.display();

	Account	temp;
	save = temp;
	save.display();

	return (0);
}