#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: the source string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);
	return (ptr);
}
