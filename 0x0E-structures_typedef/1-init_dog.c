#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
