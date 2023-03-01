#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string set.
 * @s2: second string set.
 * Return: 0 (success), and +ve or -ve value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
