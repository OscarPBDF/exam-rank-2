/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/
#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while(s1[counter])
		counter++;

	while(s2[j])
	{
		if(s1[i] != s2[j])
			j++;
		else if(s1[i] == s2[j])
			i++;
	}
	if(i == counter)
	{	
		i=0;
		while(s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	
}

int main (int argc, char **argv)
{
	if(argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	else
		write(1, "\n", 1);
}