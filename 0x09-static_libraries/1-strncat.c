#include "main.h"

/**
  * _strncat - function concatenating two strings using
  * at most n bytes from src
  * @dest: entered value
  * @src: entered value
  * @n: entered value
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int b;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;

	while (b < n && src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
