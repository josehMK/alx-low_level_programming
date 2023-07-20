#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times character should be printed
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int g, h;

	if (n <= 0)
		_putchar('\n');

	for (g = 0; g < n; g++)
	{
		for (h = 0; h < g; h++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
