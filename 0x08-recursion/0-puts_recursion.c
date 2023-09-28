#include "main.h"

/**
 * _puts_recursion - recurtion sting printing
 * description: prints a string, followed by a new line
 * using _putchar - recurtion.
 * @s: pointer to char
 * return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
