#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - function main
* Description - Prints whether number is positive, 
* negative or zero
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	if (a > 0)
		printf("%i is positive\n", n);
	else if (a < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	
	return (0);
}
