#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - Finding length of a str.
* @str:  str 2 b measured.
*
* Return: length of str.
*/
int _strlen(char *str)
{
int length = 0;

while (*str++)
length++;

return (length);
}

/**
* _strcopy - Copies a string pointed to by src,
* @dest: The buffer storing
* @src: The source str.
*
* Return:  pointer to dest.
*/
char *_strcopy(char *dest, char *src)
{
int indexing = 0;

do {
dest[indexing] = src[indexing];
indexing++;
} while (src[indexing - 1] != '\0');

return (dest);
}

/**
* new_dog - Creates a new dog.
* @name: dog's name.
* @age: dog's age.
* @owner: dog's owner.
*
* Return: struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

do {
new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
} while (new_dog->name == NULL);

_strcopy(new_dog->name, name);

new_dog->age = age;

do {
new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
} while (new_dog->owner == NULL);

_strcopy(new_dog->owner, owner);

return (new_dog);
}
