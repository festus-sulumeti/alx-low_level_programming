#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - creates a hash table
* @size: number of hash table buckets to create
* Return: address of new hash table, or NULL if failure
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;
unsigned long int index;
/*Handle errors*/
if (size == 0)
return (NULL);

/*Allocated memory*/
new_table = malloc(sizeof(hash_table_t));
/*Handle errors*/
if (new_table == NULL)
return (NULL);

/*Allocated memory*/
new_table->array = malloc(sizeof(hash_node_t *) * size);

if (new_table->array == NULL)
return (NULL);

new_table->size = size;

for (index = 0; index < size; index++)
new_table->array[index] = NULL;

return (new_table);
}
