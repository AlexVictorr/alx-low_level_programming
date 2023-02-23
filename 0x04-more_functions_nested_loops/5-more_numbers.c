#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: numbers 0 to 14, ten times
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
