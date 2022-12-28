/*
Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.
Examples:
$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int nbr = 0;
	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			nbr *= 10;
			nbr += str[i] - '0';
		}
		else
			return (nbr);
		i++;
	}
	return (nbr);
}

void ft_putnbr(int nbr)
{
	char charnbr;

	if(nbr < 10)
	{
		charnbr = nbr + '0';
		write(1, &charnbr, 1);
	}
	else
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
}

void	ft_tab_mult(int nbr)
{
	int multi = 1;
	int result = 0;

	while(multi < 10)
	{
		ft_putnbr(multi);
		write(1, " x ", 4);
		ft_putnbr(nbr);
		result = multi * nbr;
		write(1, " = ", 3);
		ft_putnbr(result);
		multi++;
		write(1, "\n", 1);
	}
	
}

int main(int ac, char **av)
{
	if(ac > 1)
	{
		ft_tab_mult(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}