#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int b, d, m = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		for (d = 0; av[b][d]; d++)
			n++;
	}
	n += ac;

	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
	for (d = 0; av[b][d]; d++)
	{
		str[m] = av[b][d];
		m++;
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	}
	return (str);
}
