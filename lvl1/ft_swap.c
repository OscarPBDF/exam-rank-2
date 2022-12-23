/*
Assignment name  : ft_swap
Expected files   : ft_swap.c
Allowed functions:
--------------------------------------------------------------------------------
 
Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:
*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

#include <stdio.h>
int	main(void)
{
	int	a = 24;
	int b = 42;

	printf("%i - %i\n", a, b);
	ft_swap(&a, &b);
	printf("%i - %i\n", a, b);

}