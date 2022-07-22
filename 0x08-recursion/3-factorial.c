#include "main.h"
/**
 * factorial - factorial of the given number
 * @n: pointer to a block of memory to fill
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0) /*Base condtion*/
	return (1);
	else if (n < 0)
		return (-1);
	else
		return ( n * factorial(n - 1)); /*Recursive call*/
}
