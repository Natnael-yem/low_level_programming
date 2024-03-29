#include "main.h"
/**
 * _strchr - loctes a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurrence of the character c in the strings
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
