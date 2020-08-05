#include "holberton.h"

/**
 * append_text_to_file - Function append text at the end of a file
 * @filename: Text to edit
 * @text_content: new content
 *
 * Return: Integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int new_open, new_write, size = 0;

	if (filename == NULL)
		return (-1);
	if (!text_content)
		while (text_content[size])
			size++;
	new_open = open(filename, O_WRONLY | O_APPEND);
	new_write = write(new_open, text_content, size);
	if (new_open == -1 || new_write == -1)
		return (close(new_open), -1);
	close(new_open);
	return (1);
}
