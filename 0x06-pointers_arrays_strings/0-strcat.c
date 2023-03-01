#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string to be printed.
 * @src: second string to be printed.
 * Return: pointer to the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0;src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
