#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Return: using the main function
 * this program prints "programming is positive,zeroo, or negative
 * return 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("%s %d is %d and is greater than 5\\n", str, n, l);
	}
	else if (l == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, L);
	}
	else if (L < 6)
	{
		printf("%s %dd is %d and is less than 6  and not 0\n", str, n, L);
	}
	return (0); 
}

