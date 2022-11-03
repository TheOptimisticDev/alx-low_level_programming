#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, changes = 0;

	diff = n ^ m;
	while (diff)
	{
		if (diff & 1)
			changes++;
		diff = diff >> 1;
	}
	return (changes);
}
