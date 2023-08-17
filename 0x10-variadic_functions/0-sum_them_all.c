#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: 0, If n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, sum = 0;

	va_start(a, n);

	for (b = 0; b < n; b++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
