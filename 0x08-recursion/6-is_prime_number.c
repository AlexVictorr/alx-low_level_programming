#include "main.h"
#include <stdio.h>
/**
 * check_prime - check if numner is prime
 * @s: input number to be checked
 * @i: iteration times
 * Return: 1 for prime or 0 for composite
 */
int check_prime(int s, int i)
{
	if (s <= 1)
	{
		return (0);
	}
	else if (s % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((s / i) < i)
	{
		return (1);
	}
	return (check_prime(s, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: input number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
