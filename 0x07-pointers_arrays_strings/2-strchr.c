#include "main.h"
/**
 * _strchr -main entry.
 * @s:char pointer
 * @c: char variable
 * Description: function that locates a character in a string
 * Return:char pointer
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	for (; *i != '\0'; i++)
	{
		if (*i == c)
		{
			break;
		}
	}
	if (*i == c)
	{
		return (i);
	}
	else
	{
		return (NULL);
	}
}
