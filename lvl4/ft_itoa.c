/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:*/

#include <stdlib.h>

#include <stdio.h>/////////////////////
char	*ft_itoa(int nbr)
{
	char	*strnbr;
	int 	aux = nbr;
	int		i = 0;

	if(aux < 0)
		i++;
	while(aux != 0)
	{
		aux /= 10;
		i++;
	}
	strnbr = malloc((i + 1) * sizeof(char));
	if(!strnbr)
		return(0);
	if(nbr < 0)
	{	
		strnbr[0] = '-';
		nbr *= -1;
	}
	strnbr[i--] = '\0';
	while(nbr > 0)
	{
		strnbr[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return(strnbr);
}



int main(void)
{
	printf("___%s___",ft_itoa(-923123));
}