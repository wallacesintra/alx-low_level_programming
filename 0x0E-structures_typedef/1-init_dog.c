#include "dog.h"

/**
 * init_dog- function that initialize a variable of type struct dog
 * @d: pointer to the dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: ownerof the dog.
 * Return: 0(success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
