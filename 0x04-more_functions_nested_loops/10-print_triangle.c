#include "main.h"

/**
 * print_triangle - function that prints triangle
 * follwed by new line
 * @size: parameter
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b >= 1; b--)
		{
			_putchar(' ');
		}
		for (c = 0; c < a; c++)
		{
			_putchar('a');
		}
		_putchar('\n');
	}

}
