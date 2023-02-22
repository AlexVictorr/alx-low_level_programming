#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: number to be checked
 * Return: Absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_value;

	abs_value = c * -1;
	return (abs_value);
	}
	else if (c > 0)
	{
	int abs_val;

	abs_value = c;
	return (abs_val);
	}
	return (c);
}
