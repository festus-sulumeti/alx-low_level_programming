#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int que;

hash = 5381;
while ((que = *str++))
{
hash = ((hash << 5) + hash) + que;
}
return (hash);
}
