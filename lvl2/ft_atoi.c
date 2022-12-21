/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:*/

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int nbr = 0;
	int ng = 1;

	if(str[i] == '-')
	{
		ng = -1;
		i++;
	}
	if(str[i] == '+')
		i++;
	if(str[i] < '0' || str[i] > '9')
		return (nbr);
	nbr = str[i] - '0';
	while(str[++i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
	}
	return (nbr * ng);
}

int main(void)
{
	printf("-- %i \n", atoi("+123a4"));
	printf("-- %i \n", ft_atoi("+123a4"));
}