#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int curr = n ^ m, bits = 0;

	while (curr > 0)
	{
		bits += (curr & 1);
		curr >>= 1;
	}

	return (bits);
}
