/*
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
*/
#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	int	index;
	int	i = 0;
	int j = 1;

	index = tab[0];
	if(len == 0 || !*tab)
		return(0);
	while(tab[i])
	{
		if(tab[j] && j < len)
		{
			if(tab[i] > tab[j] && i < len)
				j++;
			else		
			{
				index = tab[j];
				i++;
			}
		}
		else
			return (index);
	}
	return (index);
}

#include <stdio.h>
int main(void)
{
	int	tab[5] = {};
	int	tab2[5] = {123, 1, 34, 580};
	printf("%i--", max(tab, 0));
	printf("%i--", max(tab2, 3));
}