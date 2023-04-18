#include "dog.h"
#include <stdio.h>

/**
 * print_dog - struct dog
 * @d: pointer structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);  /*Print the dog's name*/
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %.6f\n", d->age);  /*Print the dog's age*/
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);  /*Print the dog's owner*/
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
