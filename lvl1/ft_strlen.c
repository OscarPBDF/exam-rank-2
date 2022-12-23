/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.
 
Your function must be declared as follows:*/

#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char *a = "Holsswaa \0 mundo\0";

	printf("%i - %lu\n", ft_strlen(a), strlen(a));

}
