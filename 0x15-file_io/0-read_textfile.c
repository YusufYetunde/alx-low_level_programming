#include "main.h"
#include <stddef.h>
/**
 * read_textfile - function to read a text file
 * @filename: file name
 * @letters: size of the letter
 * Return: Always 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x, y;

	if (!filename)
	{
		return (0);
	}
	int fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		return (0);
	}
	char *buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fp);
		return (0);
	}
	x = read(fp, buffer, letters);
	if (x < 0)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	buffer[x] = '\0';
	y = write(STDOUT_FILENO, buffer, x);
	if (y == -1 || y != x)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	close(fp);
	free(buffer);
	return (y);
}
