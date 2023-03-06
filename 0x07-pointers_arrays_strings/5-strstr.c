#include "main.h"
#include <stdio.h>
/**
 * _strstr -  locates a substring.
 * @haystack: pointer to sting input.
 * @needle: pointer to substring input.
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
