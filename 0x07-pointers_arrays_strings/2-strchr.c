#include <stdio.h>
#include "main.h"
/**
 * *_strchr -main entry.
 * @s:char pointer
 * @c: char variable
 * Description: function that locates a character in a string
 * Return:char pointer
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
		{
			break;
		}
	}
	if (*p == c)
	{
		return (p);
	}
	else
	{
		return (NULL);
	}
}
