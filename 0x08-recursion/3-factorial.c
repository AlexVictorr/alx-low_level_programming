#include "main.h"
/**
 * factorial - Calculates factorial of a given number.
 * @n: input digit
 * Return: integer value for factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
