#include "holberton.h"

/**
 * read_textfile - Funtion reads text file and prints it to the POXIS
 *
 * @filename: the file to read
 * @letters: NUmber of letters
 *
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int new_read, new_write, new_open;
	char *file;

	file = malloc(sizeof(char) * letters);
	if (filename == NULL || file == NULL)
		return (0);
	new_open = open(filename, O_RDONLY);
	new_read = read(new_open, file, letters);
	new_write = write(STDOUT_FILENO, file, new_read);

	if (new_read == -1 ||
		new_open == -1 ||
			new_write == -1 ||
				new_write != new_read)
	{
		return (free(file), 0);

	}
	free(file);
	close(new_open);
	return (new_write);

}
