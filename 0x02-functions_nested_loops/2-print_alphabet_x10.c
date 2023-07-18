#include "main.h"
/**
 * print_alphabet_x10 - make alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char A;
	int b;

	b = 0;
	while (b < 10)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
			_putchar('\n');
			b++;
	}
}
