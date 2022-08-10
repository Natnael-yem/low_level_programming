#include "main.h"
/**
 * _strpbrk - matches matches any character specifed
 * @s: this is the c string to be scanned
 * @accept: character in str1 that matches onr of the characters in str2
 * Return: string that matches any character specified in accept
 **/
char *_strpbrk(char *Ss char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
	while (accept[j] != '\0')
	{
		if (*s == accept[j])
		{
			return (s);
		}
		j++;
	}
	s++;
	}
return (0);
}
