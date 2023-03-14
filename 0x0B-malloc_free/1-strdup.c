#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: input string
 * Return: pointer to new str duplicate
 */
char *_strdup(char *str)
{
	int i, j = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
