/*
Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_". 

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int 	i = -1;
	int 	counter = 0;
	char	*str;
	int		j = 0;

	if(argc == 2)
	{
		while(argv[1][++i])
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				counter++;
		str = malloc((i + counter) * sizeof(char));
		i = 0;
		while(argv[1][i])
		{
			str[j] = argv[1][i];
			if(argv[1][i + 1] >= 'A' && argv[1][i + 1] <= 'Z')
			{	
				str[++j] = '_';
				argv[1][i + 1] += 32;
			}
			i++;
			j++;
		}
		j = -1;
		while(str[++j])
			write(1, &str[j], 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
