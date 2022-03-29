#include "main.h"

/**
 * 6-abs.c -  computes the absolute value of an integer.
 * @r: An integer input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
