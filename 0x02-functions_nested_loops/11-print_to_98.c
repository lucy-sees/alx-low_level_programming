#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int num)
{
	if (num <= 98)
	{
		for (; num <= 98; n++)
		{
			printf("%d", n);

			if (num == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; num >= 98; num--)
		{
			printf("%d", num);
			if (num == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
