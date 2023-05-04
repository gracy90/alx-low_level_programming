#include "main.h"
#include <string.h>

/**
 * _strncpy - copies n length of string into another string
 * @dest: destination string
 * @src: source string
 * @n: length of dest
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncpy(dest, src, n);
	/*dest[n] = '\0';*/
	return (ptr);
}
