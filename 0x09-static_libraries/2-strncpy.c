#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: maximun number of bytes to be copied from src.
 * Return: pointer to the final string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
