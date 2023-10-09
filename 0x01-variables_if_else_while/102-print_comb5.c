#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m <= 99; m++)
	{
		for (n = 0; n <= 99; n++)
		{
			if (m < n && m != n)
			{
				putchar('0' + (m / 10));
				putchar('0' + (m % 10));
				putchar(' ');
				putchar('0' + (n / 10));
				putchar('0' + (n % 10));
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
