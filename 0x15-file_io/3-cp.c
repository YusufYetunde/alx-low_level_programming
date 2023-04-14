#include "main.h"
#define buffer_size 1024

/**
 * exit_file - function to exit error
 * @exit_code: code to exit
 * @format: format
 * @arg: arg
 */
void exit_file(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}
/**
 * main -  program that copies the content of a file to another file
 * @argc: argument number
 * @argv: argumnet array
 * Return: Always 1 success
 */

int main(int argc, char **argv[])
{
	int fp_from, fp_to;
	int x, y;
	char buffer[buffer_size];

	if (argc != 3)
	{
		exit_file(97, "Usage: cp file_from file_to\n", "");
	}
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from < 0)
	{
		exit_file(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fp_to < 0)
	{
		exit_file(99, "Error: Cant't write to %s\n", argv[2]);
	}
	while ((x = read(fp_from, buffer, buffer_size)) > 0)
	{
		y = write(fp_to, buffer, x);
		if (y < 0 || y != x)
		{
			exit_file(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (x < 0)
	{
		exit_file(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fp_from) < 0)
	{
		exit_file(100, "Error: Can't close fd %d\n", "fp_from");
	}
	if (close(fp_to) < 0)
	{
		exit_file(100, "Error: Can't close fd %d\n", "fp_to");
	}
	return (0);
}
