#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to the string to be reversed.
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char ptr;

	while (s[i++])
	{
		j++;
	}
	for (i = j - 1; i >= j / 2; i--)
	{
		ptr = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = ptr;
	}
}
