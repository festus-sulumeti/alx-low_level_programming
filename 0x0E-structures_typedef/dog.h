#ifndef DOG_H
#define DOG_H

/*
 * Header file: dog.h important it will be used fully
 * Description: Defines a new data type struct dog with three members:
 *              name, age and owner.
 *              Also declares function prototypes for:
 *              initializing, printing, creating and freeing a dog.
 */

/**
 * struct dog - describes a dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

/**
 * init_dog - initializes a dog structure.
 * @d: pointer to the dog structure to initialize.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints the content of a dog structure.
 * @d: pointer to the dog structure to print.
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog structure.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of the new dog.
 *
 * Return: pointer to the new dog structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees a dog structure from memory.
 * @d: pointer to the dog structure to free.
 */
void free_dog(dog_t *d);

/**
 * _strncpy - copies a string.
 * @dest: pointer to the buffer to copy the string to.
 * @src: pointer to the string to copy.
 * @n: number of bytes to copy.
 *
 * Return: pointer to the buffer @dest.
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strlen - computes the length of a string.
 * @s: pointer to the string to compute the length of.
 *
 * Return: length of the string @s.
 */
int _strlen(char *s);

#endif /* DOG_H */
