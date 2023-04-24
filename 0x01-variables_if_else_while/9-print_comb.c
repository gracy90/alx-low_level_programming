#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/**
 *main - Entry point
 *Return: Always 0(Success)
 */
int main(void)
{
		int a;
		while (a < 0)
		{
			putchar(48 + a);
			if (a != 9)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		putchar('\n');
		return (0);
}
