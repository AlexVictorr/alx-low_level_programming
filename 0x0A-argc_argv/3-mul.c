#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 * Return: integer converted from s
 */
int _atoi(char *s)
{
	int i = 0, j = 0, k = 0, a = 0, length = 0, num = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length && a == 0)
	{
		if (s[i] == '-')
		{
			++j;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
			{
				num = -num;
			}
			k = k * 10 + num;
			a = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			a = 0;
		}
		i++;
	}
	if (a == 0)
	{
		return (0);
	}
	return (k);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int soln, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	soln = num1 * num2;
	printf("%d\n", soln);
	return (0);
}


