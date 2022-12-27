/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:*/

char ft_toupper(char c)
{
	if(c >= 'a' && c <= 'z')
	{
		return(c - 32);
	}
	return (c);
}

int ft_base(int c, int num_base)
{
	char *base = "0123456789ABCDEF";
	int i = 0;

	while(i < num_base)
	{
		if(c == base[i])
			return(i);
		i++;
	}
	return (-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
	int		result = 0;
	int		i = 0;
	int 	neg = 1;

	if(str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
		return(result);

	while(ft_base(ft_toupper(str[i]), str_base) != -1)
	{
		result *= str_base;
		result += ft_base(ft_toupper(str[i]), str_base);
		i++;
	}
	return (result * neg);
}
#include <stdio.h>
int main(void)
{
	char *str = "4a";

	printf("%i",ft_atoi_base(str, 11));
}