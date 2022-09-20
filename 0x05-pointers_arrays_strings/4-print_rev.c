#include "main.h"
#include <string.h>
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 * Return: Nothing
 */

void print_rev(char *s);
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
