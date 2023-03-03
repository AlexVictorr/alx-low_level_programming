#include "main.h"
/**
 * infinite_add - adds two numbers.
 * @n1: firstt number to add
 * @n2: second number to add
 * @r: pointer to buffer
 * @size_r: size of buffer
 * Return: pointer to function being called
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_length = 0, n2_length = 0;

	for (i = 0; *(n1 + i); i++)
		n1_length++;
	for (i = 0; *(n2 + i); i++)
		n2_length++;
	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);
	n1 += n1_length - 1;
	n2 += n2_length - 1;
	*(r + size_r) = '\0';
	return (add_strings(n1, n2, r, --size_r));
}
