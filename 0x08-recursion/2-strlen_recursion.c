#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 * Return: the length of s.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
