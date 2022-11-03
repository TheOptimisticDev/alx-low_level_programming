#include "main.h"

/**
 * clear_bit - set value to 1 with given index
 * @n: pointer to unsigned int
 * @index: unsigned int index
 *
 * Return: 1 if successful, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (-1);
	}
	return (1);
}
