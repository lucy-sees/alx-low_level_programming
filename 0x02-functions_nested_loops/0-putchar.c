#​include​ ​"main.h​"
​/*​*
 ​ * main - Print "_printchar" followed by a new line.
 ​ * Description: You are not allowed to include standard libraries.
 ​ * Return: 0
 ​ ​*/
​int​ ​main​(​void​)
​ {
    ​        ​char​ print_word[] = ​"​_putchar"​;
    ​        ​int​ i = ​0​;

    ​        ​while​ (print_word[i] != ​'​\0​'​)
        ​        {
        ​                ​_putchar​(print_word[i]);
        ​                i++;
        ​        
    }
    ​        ​_putchar​(​'​\n​'​);

    ​        ​return​ (​0​);
    ​
}
