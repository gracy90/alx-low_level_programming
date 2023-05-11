#include "main.h"

/*
 * _print_rev_recursion - Print a string in reverse
 * @s: the string to reverse
 * Return: nothing
 */
void _print_rev_recursion(char *s)
/*_print_rev_recursion - Print a string in reverse*/
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	/*_print_rev_recursion: print a string in reverse*/
	s--;
	_putchar(*s);
}
