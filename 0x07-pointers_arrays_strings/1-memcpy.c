#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory space
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *resultant;

	resultant = memcpy(dest, src, n);
	return (resultant);
}
