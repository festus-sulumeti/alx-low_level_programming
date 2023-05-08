#include "main.h"

/**
 * append_text_to_file - function appening text at the end of a file
 * @filename: name of the file created
 * @text_content :  NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, write_file;

	/*Check content file*/
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);


	file_d = open(filename, O_RDWR | O_APPEND);

	if (file_d == -1)
		return (-1);

	/*Write file*/
	write_file = write(file_d, text_content, strlen(text_content));
	close(file_d);

	if (write_file == -1)
		return (-1);

	return (1);
}
