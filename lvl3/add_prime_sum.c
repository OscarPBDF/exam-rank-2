/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include <stdio.h>
#include <unistd.h>
int ft_atoi(char *str)
{
	int i = 0;
	int nbr = 0;

	while(str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			return (nbr);
		else
		{
			nbr *= 10;
			nbr += str[i] - '0';
		}
		i++;
		
	}
	return(nbr);

}

int ft_is_prime(int nbr)
{
	int i = 2;
	while(i != nbr)
	{
		if(nbr % i)
			i++;
		else
			return(0);
	}
	return (1);
}

void ft_add_prime_sum(int nbr)
{
	int sum = 0;
	int i = 2;

	while (i <= nbr)
	{
		if(ft_is_prime(i))
			sum += i;
		i++;
	}
	printf("%i---\n", sum);
}

int main(int argc, char **argv)
{
	int nbr;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		ft_add_prime_sum(nbr);
	}
	else
	{
		write(1, "0\n", 2);
	}
}