/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).
 
Your function must be declared as follows:*/

#include <unistd.h>
#include <string.h>
char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

#include <stdio.h>
int	main(void)
{
	char	a[5] = "HOLA";
	char	b[6] = "MUNDO";

	ft_strcpy(a, b);
	printf("%s", a);

}
