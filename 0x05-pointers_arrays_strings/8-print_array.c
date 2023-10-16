#include "main.h"

/**
 * print_array - prints n element of an array of integer
 * @a: array to be used
 * @n: number of element
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
