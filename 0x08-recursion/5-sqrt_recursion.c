#include "main.h"
/**
 * _sqrt_recursion - returns the nstural square root of a number
 * @n: number to calculate square root 
 * return: the square root answer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return ( -1);
	}
	return (_sqr_recursion(n 
