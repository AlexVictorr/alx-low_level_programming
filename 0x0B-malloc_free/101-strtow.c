#include "main.h"
#include <stdlib.h>
/**
 * word_counter - helper function to count number
 * of words in a string
 * @c: string to count
 * Return: word count
 */
int word_counter(char *c)
{
	int flag, a, b;

	flag = 0;
	b = 0;
	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] == ' ')
		{
			flag = 0;
		}
		if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or
 * NULL (Error)
 */
char **strtow(char *str)
{
	char **spliter, *tmp;
	int i, j = 0, length = 0, words, k = 0, begin, end;

	while (*(str + length))
	{
		length++;
	}
	words = word_counter(str);
	if (words == 0)
	{
		return (NULL);
	}
	spliter = (char **) malloc(sizeof(char *) * (words + 1));
	if (spliter == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (begin < end)
				{
					*tmp++ = str[begin++];
				}
				*tmp = '\0';
				spliter[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
		{
			begin = i;
		}
	}
	spliter[j] = NULL;
	return (spliter);
}
