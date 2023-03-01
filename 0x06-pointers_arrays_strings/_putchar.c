#include <unistd.h>
#include "main.h"
/**
 * main - Entry leve
 * l
 * Description: 'program to save printf'
 *
 * Result: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c ,1));
}
