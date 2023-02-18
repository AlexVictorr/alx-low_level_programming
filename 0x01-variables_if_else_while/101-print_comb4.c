#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = '0'; digit1 < '8'; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= '9'; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= '9'; digit3++)
			{
				if ((digit2 != digit1) != digit3)
				{
					putchar(digit1);
					putchar(digit2);
					putchar(digit3);
				}
				if (digit1 == '7' && digit2 == '8')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
