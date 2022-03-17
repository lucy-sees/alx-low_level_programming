#include "main.h"
/**
 * main - print_alphabet_x10
 * Description: functions by using _putchar function to print
 * alphabets in lowercase 10 times
 * Return: 0.
 */
/*Function*/
void print_alphabet_x10(void)
{
    char i;
    int j;

    for (j = 0; j < 10; j++)
    {
        for (i = 'a'; i <= 'z'; i++)
            _putchar(i);
            _putchar('\n');
    }
}
