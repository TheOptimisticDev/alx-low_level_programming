#include "main.h"

/**
 * factorial - returns factorial of n
 * @n: the number
 * Returns: 1, -1
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
