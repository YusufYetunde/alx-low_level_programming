#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function to read a text file
 * @filename: file name
 * @letters: size of the letter
 * Return: Always 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	FILE *fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}
	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	size_t bytesRead = fread(buffer, sizeof(char), letters, fp);

	if (bytesRead == 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	ssize_t bytesWritten = printf("%s", buffer);

	if (bytesWritten != bytesRead)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (bytesRead);
}
