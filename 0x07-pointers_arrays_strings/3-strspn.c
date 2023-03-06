#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String where substring will look.
 * @accept: Substring of accepted chars.
 * Return: Length of occurrence.
 */
unsigned int _strspn(char *s, char *accept)
{
	int length, i, j = 0;

	for (length = 0; s[lenght] != '\0'; length++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[length] == accept[j])
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
