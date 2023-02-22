#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: natural number to start from
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			_putchar(n + '0');
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
		}
	}
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			_putchar(n + '0');
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(n + '0');
			_putchar(44);
			_putchar(32);
		}
	}
}
