#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
/**
 * main - Create a program that generates random valid
 * passwords for the program 101-crackme.
 * Return: Always 0 (success)
 */
int main(void)
{
	int length;

	printf("Enter the length of password: ");

	scanf("%d", &length);

	if (length <= 0)
	{
		return (1);
	}
	char *password = malloc(length + 1);
	char *numbers = "0123456789";
	int numbers_length = strlen(numbers);
	char *lowercase = "abcdefghijklmnopqrstuvwxyz";
	int lowercase_length = strlen(lowercase);
	char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int uppercase_length = strlen(uppercase);
	char *specials = "!@#$%^&*()";
	int specials_length = strlen(specials);

	srand(time(NULL) * getpid());
	for (int i = 0; i < length; i++)
	{
			int char_type = rand() % 4;

		if (char_type == 0)
		{
			password[i] = numbers[rand() % numbers_length];
		}
		else if (char_type == 1)
		{
			password[i] = lowercase[rand() % lowercase_length];
		}
		else if (char_type == 2)
		{
			password[i] = uppercase[rand() % uppercase_length];
		}
		else
		{
			password[i] = specials[rand() % specials_length];
		}
	}
	password[length] = '\0';
	printf("%s\n", password);
	free(password);
}

