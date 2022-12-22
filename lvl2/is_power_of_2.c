/*
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:*/ 

int	    is_power_of_2(unsigned int n)
{
	while(n > 1)
	{
		if(n % 2 == 0)
			n /= 2;
		else
			return (0);
	}
	return(1);
}

#include <stdio.h>

int main(void)
{
	int i = 254;
	if(is_power_of_2(i))
		printf("%i es potencia de 2\n", i);
	else
		printf("%i no es potencia de 2\n", i);

}
