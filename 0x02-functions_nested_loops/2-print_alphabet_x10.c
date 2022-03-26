#include "main.h"
/**
 * main - print_alphabet_x10
 * Description: functions by using _putchar function to print
 * alphabets in lowercase 10 times.
 * Return: 0.
 */
​void​ ​print_alphabet_x10​(​void​)
​ {
    ​        ​int​ a, b;

    ​        ​for​ (a = ​0​;  a <= ​9​;  a++)
        ​        {
        ​                ​for​ (b = ​97​;  b <= ​122​;  b++)
            ​                {
            ​                        ​_putchar​(b);
            ​                
        }
        ​        ​_putchar​(​'​\n​'​);
        ​        
    }
    ​
}
