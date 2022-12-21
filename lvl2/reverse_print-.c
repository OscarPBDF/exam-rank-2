/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 00100110
	||
	\/
 01100100
*/

#include <unistd.h>
#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int 			i = 0;
	int				j = 0;
	unsigned char 	bit = 0;


	while (i < 8)
	{
		if(octet & (1 << i))
		{
			bit |= octet << i;
			write(1, "1-", 2);
		}
		else
			write(1, "0-", 2);
		i++;
	}
	return(bit);
}

#include <stdio.h>
int main(void)
{
	int nbr = 38;

	printf("%i\n",nbr);
	
	printf("----->%i", reverse_bits(nbr));
}