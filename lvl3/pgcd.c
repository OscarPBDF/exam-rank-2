/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:
 
$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include <stdlib.h>
#include <stdio.h>
int ft_hcd(int n1, int n2)
{
	int i;
	if(n1 < n2)
		i = n1;
	else
		i = n2;
	while(i)
	{
		if(!(n1 % i) && !(n2 % i))
		{
			return(i);
		}
		i--;
	}
	return(0);
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		printf("%i\n",ft_hcd(atoi(av[1]), atoi(av[2])));
	}
}