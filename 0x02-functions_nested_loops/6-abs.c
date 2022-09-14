#include "main.h"

/**
 * _abs -fuction tht computes the absolute value of an integer
 *
 * @n: takes in integer type input for fuction
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
