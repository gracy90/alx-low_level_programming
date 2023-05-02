#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer 
 * @b: The second integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
