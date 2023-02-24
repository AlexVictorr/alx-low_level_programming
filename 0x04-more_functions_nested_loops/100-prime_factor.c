#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	long i, maxprimefac;
	long num = 612852475143;
	double square = sqrt(num);

	for (i = 1; i <= square; i++)
	{
		if (num % i == 0)
		{
			maxprimefac = num / i;
		}
	}
	printf("%ld\n", maxprimefac);
	return (0);
}
