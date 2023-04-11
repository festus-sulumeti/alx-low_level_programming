#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
* argstostr - concatenates all the arguments of a program
* @argc: the number of arguments
* @argv: an array of pointers to the arguments
* Return: a pointer to the concatenated string
*/
char *argstostr(int argc, char **argv)
{
char *result_str;
int total_chars = 0, arg_index = 0, char_index = 0, result_index = 0;

if (argc == 0 || argv == NULL)
return (NULL);


do {
char_index = 0;  /* Cal total chars in all arguments */
do {
total_chars++;
char_index++;
} while (argv[arg_index][char_index] != '\0');
arg_index++;
} while (arg_index < argc);


total_chars = total_chars + argc + 1; /* Allocate mem 4 result string */
result_str = malloc(sizeof(char) * total_chars);
if (result_str == NULL)
{
return (NULL);
}


for (arg_index = 0; arg_index < argc; arg_index++) /* Copy all args */
{
char_index = 0;
do {
result_str[result_index] = argv[arg_index][char_index];
result_index++;
char_index++;
} while (argv[arg_index][char_index] != '\0');


result_str[result_index] = '\n';  /* Add newline character */
result_index++;
}
return (result_str);
}
