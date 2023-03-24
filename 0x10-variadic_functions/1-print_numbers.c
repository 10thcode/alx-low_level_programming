#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ap;

	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(ap, int), separator);
	va_end(ap);
}
