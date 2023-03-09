#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: input string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * comparator - compares string length
 * @s: input string
 * @a1: least iterator
 * @a2: highest iterator
 * Return: .
 */
int comparator(char *s, int a1, int a2)
{
	if (*(s + a1) == *(s + a2))
	{
		if (a1 == a2 || a1 == a2 + 1)
		{
			return (1);
		}
		return (0 + comparator(s, a1 + 1, a2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: input string to be checked
 * Return: 1 if s is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
