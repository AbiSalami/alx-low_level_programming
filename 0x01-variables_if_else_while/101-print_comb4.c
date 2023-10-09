#include <stdio.h>

/**
 *  main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	while (x <= 9)
	{
		while (y <= 9)
		{
			while (z <= 9)
			{
				if (x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x == 7 && y == 8 && z == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			z = 0;
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
