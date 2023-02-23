#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number to be computed.
 * Return: diagonal line drawn "n" number of times.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
