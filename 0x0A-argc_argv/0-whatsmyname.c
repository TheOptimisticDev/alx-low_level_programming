#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the name of the function
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
