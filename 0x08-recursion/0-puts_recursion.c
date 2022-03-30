/* Author: Lucy W. Mwangi ..... Task 0 */
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to char
 * Return: Always 0.
 */

void _puts_recursion(char *s) /* function prototype*/
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
