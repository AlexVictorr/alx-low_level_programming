#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: Number to be printed
 * Return: Absolute value
 */
int print_last_digit(int n)
{
	int final;	

	final = n % 10;
	if (final < 0)
	{
	final = final * -1;
	}
	_putchar(final + '0');
	return (final);
}
