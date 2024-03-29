#include <stddef.h>
/**
 * print_name - prints a name.
 * @name: a string.
 * @f: a pointer to a function.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f) (name);
}
