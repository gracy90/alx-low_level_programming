#include "main.h"

/**
 *_isalpha - Entry point
 *@c: character to be checked
 *Return: Always 0(Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
