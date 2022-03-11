#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point 
* 
*Return: return one of the 3 options
*/
int main(void)
{	
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
