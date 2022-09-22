#include "main.h"
#include <stdio.h>

/**
 * strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src)
{
	int dlen = 0, i;
	
	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i]; != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
