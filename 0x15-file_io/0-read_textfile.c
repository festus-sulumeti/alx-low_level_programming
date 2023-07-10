#include "main.h"


/**
* read_textfile  - reading a text file and prints
* @filename:  point to a string of 0 and 1 chars
* @letters : number of letters it should read and print
* Return: number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d, counter = 0, rd_file;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(letters * sizeof(char));

if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (file_d == -1)
{
free(buffer);
return (0);
}

rd_file = read(file_d, buffer, letters);
if (rd_file == -1)
{
close(file_d);
free(buffer);
return (0);
}
while (counter < rd_file)
{
if (write(STDOUT_FILENO, &buffer[count], 1) == -1)
{
close(file_d);
free(buffer);
return (0);
}
counter++;
}
close(file_d);
free(buffer);
return (rd_file);
}
