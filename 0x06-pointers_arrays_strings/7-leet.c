#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: pointer to the string to be computed.
 * Return: pointer to n.
 */
char *leet(char *n)
{
	int i, j;
	char str1[] = "AaEeOoTtLl";
	char str2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == str1[j])
			{
				n[i] = str2[j];
			}
		}
	}
	return (n);
}
