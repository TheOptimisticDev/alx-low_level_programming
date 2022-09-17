#include <stdio.h>
#include "main.h"

/**
 * print_number - function that print the numbers from 0 up to 9
 *
 * Return: returns void
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}

	_putchar(10);
}
