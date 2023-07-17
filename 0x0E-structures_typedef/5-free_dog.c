#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog_t object
 * @d: Pointer to the dog_t object to be freed
 *
 * Return: None
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
