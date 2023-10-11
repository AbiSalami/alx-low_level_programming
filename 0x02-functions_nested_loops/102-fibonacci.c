#include <stdio.h>

/**
 * main - A function that prints the first 50 fibonacci numbers
 * starting from 1 and 2.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	/* using the unsigned long so as to accomodate positive large numbers */
	unsigned long int fibonacci_1 = 1;
	unsigned long int fibonacci_2 = 2;
	unsigned long int fibonacci_nums;
	int i;

	printf("%lu, ", fibonacci_1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", fibonacci_2);
		fibonacci_nums = fibonacci_1 + fibonacci_2;
		fibonacci_1 = fibonacci_2;
		fibonacci_2 = fibonacci_nums;
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
