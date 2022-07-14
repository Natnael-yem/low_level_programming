#include "main.h"
/**
 * _strncat - cancatenates two strings
 * @dest:  a pointer to a character that will be updated
 * @src: a pointer to a character that will be updated
 * @n: value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
