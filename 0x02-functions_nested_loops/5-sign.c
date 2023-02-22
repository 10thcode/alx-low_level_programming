#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The number.
 *
 * Return: 1  if n is greater than zero.
 * 0  if n is greater than zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	else if (n == 0)
		_putchar('0');
	else
		_putchar('-');
}
