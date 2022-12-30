/*
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$

*/

#include <stdlib.h>
#include <stdio.h>

int	is_prime(int prime)
{
	int i = 2;

	while(prime > i)
	{
		if(prime % i == 0)
			return (0);
		else
			i++;
	}
	return (1);

}

int fprime(char *str)
{
	int	prime = 2;
	int nbr;

	nbr = atoi(str);
	

	if(nbr == 1)
	{
		printf("1");
		return(0);
	}
	else if(nbr < 1)
		return(0);
	if(is_prime(nbr))
		printf("%i", nbr);
	else
	{
		while(nbr >= prime)
		{
			if(is_prime(prime))
			{
				if(nbr % prime == 0)
				{
					printf("%i", prime);
					if(nbr != prime)
						printf("*");
					nbr /= prime;
				}
				else
					prime++;
			}
			else
				prime++;
		}
	}
	return(0);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		fprime(av[1]);
	}
	printf("\n");
}