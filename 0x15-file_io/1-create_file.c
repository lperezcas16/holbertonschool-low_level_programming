#include "holberton.h"
/**
 * create_file - This funtion creates a new file.
 * @filename: Name of the nre file.
 * @text_content: Number of letters.
 *
 * Return: The number of letters.
 **/
int create_file(const char *filename, char *text_content)
{
	int file;
	int bytes = 0;
	int write_t;
	int i = 0;

	if (filename == NULL) /*Verification of filename */
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600); /*Create file */
	if (file == -1)
		return (-1);

	if (text_content == NULL) /*Verification of text_content*/
	{
		close(file);
		return (1);
	}

	while (*(text_content + i) != '\0')
	{
		bytes++;
		i++;
	}

	write_t = write(file, text_content, bytes);  /*writing inside the new file */
	if (write_t == -1)
		return (-1);
	close(file);
	return (1);
}
