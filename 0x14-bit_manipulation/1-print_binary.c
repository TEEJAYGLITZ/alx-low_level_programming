#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @i: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int i)
{
	if (i >> 0)
	{
		if (i >> 1)
			print_binary(i >> 1);
		_putchar((i & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
