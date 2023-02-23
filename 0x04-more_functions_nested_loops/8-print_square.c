#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: number to be computed
 * Return: prints out squares represented by #
 */
void print_square(int size)
{
	int i;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		while (j < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
			j++;
		}
	}
}
