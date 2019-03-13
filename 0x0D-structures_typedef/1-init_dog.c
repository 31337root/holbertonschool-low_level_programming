#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * struct dog - Stores the dog data.
 * @d: Struct variable.
 * @name: M2mber 1.
 * @age: Member 2.
 * @owner: Member 3.
 * Return: Void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
