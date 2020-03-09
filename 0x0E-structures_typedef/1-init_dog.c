#include "dog.h"

/**
 * init_dog -initialize a variable of type struct dog
 * @d: Pointer to the dog struct argument
 * @name: Dog name, first member init
 * @age: Dog age, second member init
 * @owner: Dog owner, third member init
 * Description: users input arguments to organize them in the struct "dog"
 * Return: void
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
