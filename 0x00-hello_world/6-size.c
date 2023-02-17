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
	long l;
	long Long ll;
	float f;

	printf("The size of an int is: %d byte(s)\n", sizeof(i));
	printf("The size of a char is: %d byte(s)\n", sizeof(c));
	printf("The size of a long Int is: %d byte(s)\n", sizeof(l));
	printf("The size of a long Long Int is: %d byte(s)\n", sizeof(ll));
	printf("The size of a foat is: %d byte(s)\n", sizeof(f));

	return (0);
}
