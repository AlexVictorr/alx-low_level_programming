#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: number to be checked
 * Return: 1 for uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
