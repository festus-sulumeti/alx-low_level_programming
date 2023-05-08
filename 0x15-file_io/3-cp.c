#include "main.h"
#define BUFFERSIZE 1204

/**
* main - cps contents of one file to another
* @ac: arguement count
* @av: arguement list: file names
* Return: 0;
*/
int main(int ac, char **av)
{
int file_d, fd_dest, read_file, check;
char buffer[BUFFERSIZE];

mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;


if (ac != 3)

dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_d = open(av[1], O_RDONLY);
if (file_d == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
if (fd_dest == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

read_file = check = 1;
while (read_file)
{
read_file = read(file_d, buffer, BUFFERSIZE);
if (read_file == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
if (read_file > 0)
{
check = write(fd_dest, buffer, read_file);
if (check == -1) /*If can't write*/
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
}
}
check = close(file_d);
if (check == -1)
dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_d), exit(100);

check = close(fd_dest);

if (check == -1)
dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", fd_dest), exit(100);
return (0);
}
