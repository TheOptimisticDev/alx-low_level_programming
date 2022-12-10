#include "main.h"

/*
 * get_endianness - checks whether a machine is big endian or little
 *
 * Return: 1 if little endian, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
