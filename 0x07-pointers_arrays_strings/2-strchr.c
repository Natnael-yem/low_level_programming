#include "main.h"
/**
 * _strchr - loctes a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occura=ence of the character c in the strings
 **/
char *_strchr(char *S, char c)
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
