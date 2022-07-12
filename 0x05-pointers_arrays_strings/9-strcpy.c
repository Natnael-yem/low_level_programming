#include "main.h"
/**
 * _strcpy - copies the string pointed to by a src
 * @dest: a pointer to an int that will be updated
 * @src: a pointer to an int that wiil be updated
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
