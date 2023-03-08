#include "main.h"
/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: input digit to be multiplied
 * @y: input digit to be the power raised
 * Return: digit that has be multiplied by the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
