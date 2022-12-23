/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int len =  0;
	int i = 1; //<---- para el caso de (0, 0)
	int *tab;
	
	if (start < end)
		return(ft_rrange(end, start));
	len = start;
	while(len > end)
	{
		i++;
		len--;
	}
	tab = malloc(i * sizeof(int));

	len = 0;
	if(tab)
	{
		while(len < i)
		{
			tab[len] = start;
			len++;
			start--;
		}
	}
	return(tab);
}

int main(void)
{
	int j = 0;

	int *tab = ft_rrange(0, -3);

	while(j < 4)
	{
		printf("%i ", tab[j]);
		j++;
	}
}