/* Author: Lucy W. Mwangi ..... Task6 */

#include "main.h"

/**
 * _strlen_recursion - returns 1 if the input integer is a prime number,
 * otherwise 0
 * @s: pointer to string parameter
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int p1(char *s, int 1)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l)
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
