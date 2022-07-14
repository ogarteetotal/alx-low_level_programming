#include <stdio.h>

/**
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* Swap function definition */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
