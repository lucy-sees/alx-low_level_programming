#include <unistd.h>
/**
 * main - Entry point of code
 *
 * Return: Always 0 (Success)
 */

 ​int​ ​_putchar​(​char​ c) 
 ​{ 
 ​        ​return​ (​write​(​1​, &c, ​1​)); 
 ​}
