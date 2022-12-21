/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		len = 0;
	char	*str;

	while(src[len])
		len++;
	str = malloc((len + 1) * sizeof(char));
	len = 0;
	while(src[len])
	{
		str[len] = src[len];
		len++;
	}
	str[len] = 0;
	return(str);
}

int main(void)
{
	printf("-- %s \n", strdup("Hola-Mundo"));
	printf("-- %s \n", ft_strdup("Hola-Mundo"));
}