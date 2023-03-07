#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: pointer to digit to be inputed.
 * @size: pointer to input digit
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, adds1 = 0, adds2 = 0;

	for (i = 0; i < size; i++)
	{
		adds1 = adds1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		adds2 = adds2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", adds1, adds2);
}
