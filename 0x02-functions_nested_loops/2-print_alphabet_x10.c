#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		while (i < 10)
		{
			_putchar('\n');
			i++;
		}
		putchar(l);
	}
}

