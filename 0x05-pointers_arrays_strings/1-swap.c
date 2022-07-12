#include "main.h"
/**
 * swap_int - swap the values of two integers a and b
 * @a: pointer to an int that will be updated
 * @b: poniter to an int that will be updated
 * Return:  void
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
