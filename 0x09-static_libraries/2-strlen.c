#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: character pointing to the entered string.
 * Return: number showing length of string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
