#include <stdio.h>
/**
 * main - Prints alphabet in lowercase and then in uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for(i = 0; i < 52; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar("\n");
	return (0);
}
