#include <stdio.h>
#include <stdlib.h>

int main() //the modulo operator (%)
{
    int y;
    int x;
    int result;

    y=5;
    x=4;
    result= y%x;
    printf("%d\n", result);//result is 1
    
    result=x%y;
    printf("%d\n", result);//result is 4

    y=4;
    x=2;
    result= y%x;
    printf("%d\n", result);//result is 0

    return 0;
    


}