#include <stdio.h>
#include "main.h"

/**

*_strcpy - function copies string pointed to src and dest

*@dest: Pointer parameter

*Return: char
*/
char *_strcpy(char *dest, char *src)
{
int newly = 0;

do
{
dest[newly ] = src[newly ];
newly ++;
} while (src[newly  - 1] != '\0');

return (dest);
}
