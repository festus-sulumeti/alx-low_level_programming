#include "dog.h"
#include <stdio.h>

/**
*print_dog - prints the contents of a dog struct
*@d: pointer to struct dog
*Returns: void.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Invalid dog struct pointer\n");
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age: Invalid age\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
