/*
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>

##############./a.out " this        time it      will     be    more complex     " <--- error al haber mas de un espacio al final
*/
#include <unistd.h>
void	ft_expand_str(char *str)
{
	int i = 0;

	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;

	while(str[i])
	{
		if(str[i + 1] && (str[i] == ' ' || str[i] == '\t'))
		{
			write(1, "   ", 3);
			i++;
			while(str[i] == ' ' || str[i] == '\t')
				i++;
		}
		if(str[i] != ' ' && str[i] != '\t')
			write(1, &str[i], 1);
		i++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		ft_expand_str(argv[1]);
	}
	write(1, "\n", 1);
}