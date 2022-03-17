#​include​ ​"​main.h​"
/*​*
 ​ * _islower - Check Main
 ​ *@c: An input character
 ​ * Description: function uses _putchar function to print
 ​ * alphabet in lowercase 10 times
 ​ * Return: 1 if is lowercase or 0 if is uppercase
 ​ ​*/
int​ ​_islower​(​int​ cc
{
    char​ i;
    int​ lower = ​0​;
    for​ (i = ​'​a​'​;  i <= ​'​z​'​;  i++)
    {
        if​ (i == cc
                lower = ​1​;
                ​        
    }

​return​ (lower);
}
