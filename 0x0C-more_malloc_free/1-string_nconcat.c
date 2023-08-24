#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int q = 0, r = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!s)
		return (NULL);
	while (q < length1)
	{
		s[q] = s1[q];
		q++;
	}
	while (n < length2 && q < (length1 + n))
		s[q++] = s2[r++];
	while (n > length2 && q < (length1 + length2))
		s[q++] = s2[r++];
	s[q] = '\0';
	return (s);
}
