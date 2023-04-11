#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @string1: First string input.
* @string2: Second string input.
*
* Return: Pointer to an array of characters.
*/
char *str_concat(char *string1, char *string2)
{
char *result;
unsigned int length1, length2, index, limit_in;

if (string1 == NULL)
string1 = "";
if (string2 == NULL)
string2 = "";

length1 = 0;
while (string1[length1] != '\0')
length1++;

length2 = 0;
while (string2[length2] != '\0')
length2++;

result = malloc(sizeof(char) * (length1 + length2 + 1));

if (result == NULL)
{
free(result);
return (NULL);
}

index = 0;
do {
result[index] = string1[index];
index++;
} while (index < length1);

limit_in = length2;
index = 0;
do {
result[length1 + index] = string2[index];
index++;
} while (index <= limit_in);

return (result);
}
