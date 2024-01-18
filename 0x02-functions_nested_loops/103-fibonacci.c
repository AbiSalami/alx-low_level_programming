#include <stdio.h>

/**
 * main - a function that prints the first 50 fibonacci numbers
 * starting from 1 and 2
 *
 * Return: always 0 (success)
 */

int main(void)
{
	/* using the unsigned long so as to accomodte positive large numbers */
	unsigned long int fibona_first_num = 1;
	unsigned long int fibona_second_num = 2;
	unsigned long int fibona_nums;
	int sum_of_num_fibonacci = 2;

	{
		for (; fibona_nums <= 4000000; fibona_nums++)
		{
			fibona_nums = fibona_first_num + fibona_second_num;
			if (fibona_nums % 2 == 0)
		}
		fibona_first_num = fibona_second_num;
		fibona_second_num = fibona_nums;
	}
	printf("%d\n", sum_of fibonacci);
	return (0);
}
