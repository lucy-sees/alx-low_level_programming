#include <stdio.h>

/**
 * main - The main block
 *
 * Return: Always 0 is success
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
