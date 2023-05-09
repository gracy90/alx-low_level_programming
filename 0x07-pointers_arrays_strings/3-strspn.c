#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: substring to be matched
 *
 * Return: the length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
