#include "main.h"

/**
 * reverse_array - reverse an integer array
 * @a: pointer to the array
 * @n: the number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	while (i < j)
	{
		tmp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = tmp;
		i++;
		j--;
	}
}
