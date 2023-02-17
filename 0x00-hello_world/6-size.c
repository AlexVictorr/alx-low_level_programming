/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include<stdio.h>
int main(void)
{
	int i;
	char c;
	longInt li;
	longLongInt lli;
	float f;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a longInt is: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of a longLongInt is: %lu.\n", (unsigned long)sizeof(lli));
	printf("The size of a foat is: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
