/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:*/

#include <stdio.h>
#include <string.h>

//Devuelve el puntero del primer str desde que encuentra la primera concurrecia en el segundo str
//h(o)la - mund(o) >> ola
char	*ft_strpbrk(const char *s1, const char *s2)
{
	char *aux;
	int	j;

	aux = (char *)s1;
	while(*aux)
	{
		j = 0;
		while(s2[j])
		{
			if(*aux == s2[j])
				return (aux);
			j++;
		}
		aux++;
	}
	return (0);
}

int main(void)
{
	printf("-- %s \n", strpbrk("hola", "mulda"));
	printf("-- %s \n", ft_strpbrk("hola", "mulda"));
}