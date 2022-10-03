#include <unistd.h>

/*
 * _putchar - writtes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approprietly.
 */

int _putchar(char)
{
	return (write(1, &c, 1));
}
