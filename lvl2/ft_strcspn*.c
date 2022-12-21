/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:*/

#include <string.h>
#include <stdio.h>

//Compara cada char del primer str con los del segundo. Si encuentra un char repetido, para y 
//devuelve la posicion del str desde donde los chars son repetidos
//(no tiene en cuenta chars no-repetidos que aparezcan despues de un char repetido). 
//Si todos son repetidos, devuelve la longitud del primer str o la posicion del \0
// geek(3)56 - 12(3)456789 -> 4 = Posicion desde la cual los chars son repetidos

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;
	int		j = 0;

	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

int main(void)
{
	printf("-- %zu \n", strcspn("geek456", "123456789"));
	printf("-- %zu \n", ft_strcspn("geek456", "123456789"));
}