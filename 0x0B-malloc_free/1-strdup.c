#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space
* @str: string to be copied.
*
* Return: pointer to the duplicated string / NULL
**/
char *_strdup(char *str)
{
char *strDup;
int val, lin, fes;

if (str == NULL)
return (NULL);

val = 0; /* initialize variable val */
while (str[val] != '\0') /* loop 2 count length of str */
val++; /* increment val */

val++; /* add one more byte for null terminator */
strDup = malloc(sizeof(*str) * val); /* allocate memory 4 strDup */
if (strDup == NULL)
return (NULL);

lin = 0; /* initialize variable lin */
do {
if (lin > 0) /* check if this is the first loop */
{
for (fes = 0; fes < lin; fes++) /* loop check if previous el = equal */
if (strDup[fes] != str[fes])
return (NULL);
}
strDup[lin] = str[lin]; /* copy str to strDup */
lin++; /* increment lin */
} while (lin < val); /* continue until all elements = copied */

return (strDup);
}
