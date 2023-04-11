#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of a program.
* @ac: argument count.
* @av: argument vector.
*
* Return: pointer to the concatenated string.
*/
char *argstostr(int ac, char **av)
{
char *concatenated;
int total_chars = 0, arg_index = 0, char_index = 0, concatenated_index = 0;

if (ac == 0 || av == NULL)
return (NULL);


for (arg_index = 0; arg_index < ac; arg_index++)
{
if (av[arg_index] == NULL)
return (NULL);

char_index = 0;
do {
total_chars++;
} while (av[arg_index][char_index++] != '\0');

total_chars++; /* add space for the newline character */
}

concatenated = malloc((total_chars + 1) * sizeof(char));

if (concatenated == NULL)
return (NULL);


arg_index = 0;
do {
char_index = 0;   /* concatenate the argument strings*/
do {
concatenated[concatenated_index++] = av[arg_index][char_index];
} while (av[arg_index][char_index++] != '\0');

concatenated[concatenated_index++] = '\n'; /* newline character */
} while (++arg_index < ac);

concatenated[concatenated_index] = '\0'; /* add null terminator */

return (concatenated);
}
