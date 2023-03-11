#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into a program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
	printf("%d\n", argc - 1);
	return (0);
}
