#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0 (Success)
 */

void print_square(int size)
{
	int g, h;

	if ((size) <= 0)
		_putchar('\n');

	for (g = 0; g < (size); g++)
	{
		for (h = 0; h < (size); h++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
