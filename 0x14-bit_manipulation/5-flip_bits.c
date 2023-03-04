#include "main.h"

/**
  * flip_bits - function that returns the number of bits you would need to
  * flip to get from one number to another
  * @n: number 1
  * @m: number 2
  * Return: 1 if it worked, or -1 if an error occurred
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int auxbin = n ^ m;
	unsigned int bitflip = 0;

	while (auxbin)
	{
		bitflip = bitflip + (auxbin & 1);
		auxbin = auxbin >> 1;
	}
	return (bitflip);
}
