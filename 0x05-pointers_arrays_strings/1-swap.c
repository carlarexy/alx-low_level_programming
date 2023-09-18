#include <stdio.h>

/**
 * swap_int - swap the values of two intengers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the functions that swaps the values of two intergers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
