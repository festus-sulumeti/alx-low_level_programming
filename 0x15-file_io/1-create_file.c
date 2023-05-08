#include "main.h"

/**
* create_file  - unction creating a file
* @filename: name of the file to create
* @text_content : NULL terminated string to write to  file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int file_d, write_file;

if (filename == NULL)
return (-1);

file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (file_d == -1)
return (-1);

if (text_content != NULL)
{
write_file = write(file_d, text_content, strlen(text_content));
if (write_file == -1)
{
close(file_d);
return (-1);
}
}

close(file_d);
return (1);
}
