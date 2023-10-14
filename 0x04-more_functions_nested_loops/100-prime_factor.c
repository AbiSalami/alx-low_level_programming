#include <stdio.h>

/**
 * main - entry point
 * description: code that prints the prime factors of the number 
 * 612852475143, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int n;

	n = 612852475143;
	for (i = 3; i < 782849; i += 2)
	{
		if ((n % i == 0) && (n != 1))
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
