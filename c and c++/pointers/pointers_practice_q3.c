#include<stdio.h>


void function1(int *add)
{
    *add=10+*add;   
}

int main()
{
    int a=9;
    int *add1, *add2;
    add1=&a;
    printf("value of a: %d, add1:%u before function1\n", a, add1);
    function1(add1);
    printf("value of a: %d, add1:%u after function1\n", a, add1);


    return 0;
}