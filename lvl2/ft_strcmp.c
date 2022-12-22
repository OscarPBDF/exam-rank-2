/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:*/ 

#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] && s2[i])
	{
		if(s1[i] == s2[i])
			i++;
		else if(s1[i] > s2[i])
			return(1);
		else if(s1[i] < s2[i])
			return(-1);
	}
	return (0);
}

int main(void)
{
	printf("-- %i \n", strcmp("hola", "Hola"));
	printf("-- %i \n", ft_strcmp("hola", "Hola"));
}