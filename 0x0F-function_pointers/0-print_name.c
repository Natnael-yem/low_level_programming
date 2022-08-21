#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name of print
 * @f: pointer to the string function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
