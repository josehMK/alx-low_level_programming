#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints numbers 1 to 100. Fizz for multiple of 3, 
 * Buzz for multiple of 5, and FizzBuzz for multiples of both
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
