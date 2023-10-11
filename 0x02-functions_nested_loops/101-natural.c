#include <stdio.h>

/**
 * main - entry point
 * description: if we list all the natural numbers
 * below 10 that are multiples of 3 or 5, we get
 * 3, 5, 6 and 9. The sum of these multiples is
 * 23. write a program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line. you are allowed to use the standard library
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	int sum_of_num_multiples  = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 ==0) || (i % 5 == 0 ))
		{
			sum_of_num_multiples += i;
		}
	}
	printf("%d\n", sum_of_num_multiples);
	return (0);
}
