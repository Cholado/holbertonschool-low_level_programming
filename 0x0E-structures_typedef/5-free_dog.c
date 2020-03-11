#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Set the  dogs free (let the dogs out :v)
 * @d: ptr dog to free
 * Description: if ptr exist frees struct in order first members then ptr
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
