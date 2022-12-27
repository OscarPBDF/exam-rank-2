/*
Assignment name  : lcm
Expected files   : lcm.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.

A LCM can be calculated in two ways:

- You can calculate every multiples of each integers until you have a common
multiple other than 0

- You can use the HCF (Highest Common Factor) of these two integers and
calculate as follows:

	LCM(x, y) = | x * y | / HCF(x, y)

  | x * y | means "Absolute value of the product of x by y"

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:*/

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int i = 2;

	while (i < a || i < b)
	{
		if(!(a % i) && !(b % i))
			return(i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%i", lcm(30, 155)); 
}

