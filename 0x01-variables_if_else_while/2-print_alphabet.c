/*
 * File: 2-print_alphabets.c
 * Author: Lucy W. Mwangi
 */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Using the main funnction
 * this program prints the alphabet in lowercase
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);

	putchar('\n');

	return (0);
}
