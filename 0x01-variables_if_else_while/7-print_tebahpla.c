/*
 * File: 7-print_tebahpla.c
 * Author: Lucy W. Mwangi
 */
#include <stdio.h>
/**
 * main - functions by printing alphabets in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
