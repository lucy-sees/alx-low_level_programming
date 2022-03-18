#include "main.h"
/**
 * Author - Lucy W. Mwangi
 * print_numbers - main function
 * Description -  a function that prints the numbers, from 0 to 9, 
 * followed by a new line.
 */
void print_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		_putchar(n++);
	}
	_putchar(10);
}
