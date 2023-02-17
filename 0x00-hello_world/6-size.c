/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include<stdio.h>
int main(void)
{
	printf("The size of an int is: %d byte(s)\n", sizeof(int));
	printf("The size of a char is: %d byte(s)\n", sizeof(char));
	printf("The size of a long Int is: %d byte(s)\n", sizeof(long int));
	printf("The size of a long Long Int is: %d byte(s)\n", sizeof(long long int));
	printf("The size of a foat is: %d byte(s)\n", sizeof(float));

	return (0);
}
