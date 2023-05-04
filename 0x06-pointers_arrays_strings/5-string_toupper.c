#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: a pointer to a string
 *
 * Return: pointer to the transformed string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str)i;
