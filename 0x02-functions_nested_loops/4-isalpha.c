#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Character to be checked
 * Return: 1 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}