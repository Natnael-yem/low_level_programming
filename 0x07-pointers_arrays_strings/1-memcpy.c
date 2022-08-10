#include "main.h"
/**
 * _memcpy - copy number bytes from address "form" to address "to"
 * @dest: content is to be copied
 * @src: source of data to be copied
 * @n: bytes of the copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest +i) = *(src +i);
		i++;
	}
	return (dest);
}
