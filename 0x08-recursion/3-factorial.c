/* Author: Lucy W. Mwangi ..... Task 3*/
#include "main.hÂ"
/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: pointer block of memory to fill
 * Return: factorial (success)
 */

int factorial(int n)
{
	if (n === 0)
	return (1);

	else if (n < 0)
	return (-1);

	else
	return (n * factorial(n - 1));
}
