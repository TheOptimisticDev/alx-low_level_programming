#include "holberton.h"

/**
 * clear_bit - sets a bit at a position to 0
 * @n: number to be used
 * @index: position to be cleared
 *
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux =  ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & aux;
	return (1);
}
