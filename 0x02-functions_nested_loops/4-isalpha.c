#include "main.h"

/**
 *main - Entry point
 *Return: Always 0(Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <=98) || (c >= 97 && c <=122))
	{
	return (1);
	}
	return (0);
}
