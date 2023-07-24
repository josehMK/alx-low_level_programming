#include "main.h"
/**
 * swap_int - a function that swaps the alues of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
