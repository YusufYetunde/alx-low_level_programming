#include "main.h"
#include <unistd.h>
/**
 * main - Entry level
 *
 * Description: 'program to save printf'
 *
 * Return: Always 0 (success)
 */

int putchar(char c)
{
	return(write(1, &c ,1));
}
