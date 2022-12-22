/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e 
$*/

#include <unistd.h>

int iter(char *str, char letter, int pos)
{
	int i = 0;
	while(str[i] && (i < pos || pos == -1))
	{
		if(str[i] == letter)
		{
			i++;
			return(1);
		}
		else
			i++;
	}
	return (0);
}

void inter(char *str1, char *str2)
{
	int	i = 0;

	while(str1[i])
	{
		if(!iter(str1, str1[i], i) && iter(str2, str1[i], -1))
		{
			write(1, &str1[i], 1);
		}
		i++;		
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}

	write(1, "\n", 1);
	return (0);
}
