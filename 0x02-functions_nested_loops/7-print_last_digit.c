#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar((char)last_digit);

	return ((int)last_digit);
}
