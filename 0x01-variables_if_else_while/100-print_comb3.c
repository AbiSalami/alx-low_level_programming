#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int m = 0;
	int n = 0;

	while (m <= 9)
	{
		while (n <= 9)
		{
			if (m < n)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m == 8 && n == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			n++;
		}
		n = 0;
		m++;
	}
	return (0);
}
