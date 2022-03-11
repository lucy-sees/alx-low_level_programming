#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - function main
* Description: Print whether number is positive, negative or zero
* Return: 0
*/
int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	if (a > 0)
		printf("%i is positive\n", a);
	else if (a < 0)
		printf("%i is negative\n", a);
	else
		printf("%i is zero\n", a);
	
	return (0);
}
