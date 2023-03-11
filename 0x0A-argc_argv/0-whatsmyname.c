#include <stdio.h>
#include "main.h"
/**
 * main - prints a program's name
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
