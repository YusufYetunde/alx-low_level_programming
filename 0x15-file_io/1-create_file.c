#include "main.h"
#include <stddef.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - function tgat create a file
 * @filename: file name
 * @text_content: text content
 * Return: Always 1
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		int bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
