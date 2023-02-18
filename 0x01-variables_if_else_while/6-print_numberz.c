#include <stdio.h>
/**
 * main - Prints all single digits of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	char num[10] = "0123456789";
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);
}
