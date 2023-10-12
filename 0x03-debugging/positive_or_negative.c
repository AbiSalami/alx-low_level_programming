#include "main.h"
/* betty style doc for function main goes there */
/**
 * positive_or_negative - entry point
 * @i: parameter for int i
 * Return: 0 (success)
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
