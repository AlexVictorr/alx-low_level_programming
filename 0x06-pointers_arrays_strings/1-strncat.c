#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * and src does not need to be null-terminated if it contains n or
 * more bytes.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
