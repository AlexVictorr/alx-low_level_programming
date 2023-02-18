#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all the letters of the alphabet except e and q
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		if (i != 5 && i != 17)
		{
			putchar(alpha[i]);
		}
	}
	putchar('\n');
	return (0);
}
