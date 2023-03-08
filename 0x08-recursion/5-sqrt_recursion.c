#include "main.h"
#include <stdio.h>
/**
 * square - Find square root
 * @n: digit to find squre root
 * @solve: square root
 * Return: digit
 */
int square(int n, int solve)
{
	if (solve * solve == n)
	{
		return (solve);
	}
	else if (solve * solve < n)
	{
		return (square(n, solve + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: input digit to calculate square root
 * Return: digit of square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
