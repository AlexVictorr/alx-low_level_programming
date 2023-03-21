#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_a, len_b;

	struct dog *n_dog = NULL;

	len_a = 0;
	while (name[len_a] != '\0')
	{
		len_a++;
	}
	len_b = 0;
	while (owner[len_b] != '\0')
	{
		len_b++;
	}
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len_a + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len_b + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len_a; i++)
	{
		n_dog->name[i] = name[i];
	}
	for (i = 0; i <= len_b; i++)
	{
		n_dog->owner[i] = owner[i];
	}
	n_dog->age = age;
	return (n_dog);
}
