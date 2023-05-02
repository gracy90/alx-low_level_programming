#include <stdio.h>

/**
 * _strlen - Return the length
 * @str: the string to get the length
 * Return: the length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
