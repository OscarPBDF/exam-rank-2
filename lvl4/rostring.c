/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

#include <unistd.h>

void ft_rostring(char *str)
{
	int start;
	int end;
	int len = 0;
	int flag = 0;

	while(str[len] == ' ' || str[len] == '\t')
		len++;
	start = len;
	while(str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	end = len;
	while(str[len] == ' ' || str[len] == '\t')
		len++;
	while(str[len])
	{
	
		write(1, &str[len], 1);
		len++;
	}
	while(start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int main(int ac, char **av)
{
	if(ac == 2)
		ft_rostring(av[1]);
	write(1, "\n", 1);
}