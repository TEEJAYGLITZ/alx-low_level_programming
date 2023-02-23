#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characrter c to stdout
 * @c: the character to print
 *
 * Return: On success
 */
int _purchar(char c)
{
	return (write(1, &c, 1));

