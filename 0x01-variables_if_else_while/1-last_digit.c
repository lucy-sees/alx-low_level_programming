#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function main block
 * Description - Prints statements based on the last digit of a random number (positive, negative or zero)
 * Return 0
 */
int main(void)
{
  int n;
  int m;
  
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  m = n % 10;
  
  if (m > 5)
      printf("Last digit of %d is %d and is greater than 5\n", n,m);
  else if (m == 0)
      printf("Last digit of %d is %d and is 0\n", n,m);
  else (m < 5)
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n,m);
  
  return (0);
}
