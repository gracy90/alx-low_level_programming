#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate specific length of string
 * @dest: destination string
 * @src: source string
 * @n: size of dest
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);
	return (ptr);
}
