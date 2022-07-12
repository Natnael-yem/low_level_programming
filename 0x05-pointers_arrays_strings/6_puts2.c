#include "main.h"
/**
 * puts2 - prints everry character of a string
 * @str: pointer to an int that will be updated
 * Return: void 
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar (str[a]);
		}
		_putchar ('\n');
	}
