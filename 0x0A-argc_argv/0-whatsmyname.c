#include <stdio.h>
#include " main.h"
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: auguments
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	print("%s\n", argv[0]);
	return (0);
}
 