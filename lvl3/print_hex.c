/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int nbr = 0;

	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			nbr *= 10;
			nbr += str[i] - '0';
		}
		i++;
	}
	return(nbr);
}

void ft_print_hex(int nbr)
{
	char *base = "0123456789abcdef";
	int i = 0;

	if(nbr < 16)
		write(1, &base[nbr], 1);
	else
	{
		ft_print_hex(nbr/16);
		ft_print_hex(nbr%16);
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_print_hex(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
}