#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer;
	long int long_integer;
	long long int long_long_integer;
	char character;
	float floating_point_number;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long_integer));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long_long_integer));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floating_point_number));
	return (0);
}
