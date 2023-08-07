#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int n, p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	n = p = 0;

	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[p] != '\0')
	{
		p++;
	}
	concat = malloc(sizeof(char) * (n + p + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	n = p = 0;

	while (s1[n] != '\0')
	{
		concat[n] = s1[n];
		n++;
	}

	while (s2[p] != '\0')
	{
		concat[n] = s2[p];
		n++, p++;
	}
	concat[n] = '\0';
	return (concat);
}
