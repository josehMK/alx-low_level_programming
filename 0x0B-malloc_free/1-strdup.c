#include <stdio.h>	
#include <stdlib.h>
#include "main.h"
		
/**
 * _strdup - returns pointer to a new string
 * @str: char
 * Return: 0
 */
		
char *_strdup(char *str)
{
	char *mmm;
	int w, y = 0;

	if (str == NULL)
	{
		return (NULL);
	}	
	w = 0;
	
	while (str[w] != '\0')
		w++;

	mmm = malloc(sizeof(char) * (w + 1));
	if (mmm == NULL)
	{
		return (NULL);
	}

	for (y = 0; str[y]; y++)
	{
		aaa[y] = str[y];
	}
	return (mmm);
}
