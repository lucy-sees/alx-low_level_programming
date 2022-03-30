/* Author: Lucy W. Mwangi*/
#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: pointer block of memory to fill
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
