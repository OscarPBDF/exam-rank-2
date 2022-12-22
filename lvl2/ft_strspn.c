/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:*/

//Compara cada char del primer str con los del segundo. Si encuentra un char NO repetido, para y 
//devuelve la posicion del str desde donde los chars no son repetidos
//(no tiene en cuenta chars repetidos que aparezcan despues de un char no-repetido). 
//Si todos son repetidos, devuelve la longitud del primer str o la posicion del \0 

#include <string.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int j;

	if(s[i])
	{
		j = 0;
		while(accept[j])
		{
			if(s[i] == accept[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
	}
	return(i);

}

#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("-- %zu \n", strspn("42geekforgeeks", "4123456789g"));
	printf("-- %zu \n", ft_strspn("42geekforgeeks", "4123456789g"));
}