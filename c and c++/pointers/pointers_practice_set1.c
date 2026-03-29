#include<stdio.h>
int main()
{

    //prgram to print address of avariable and use address to print the variable/'s value.
    int a=10;
    int *address;
    address=&a;
    printf("value of a is %d, its address is %u\n", a, address);//unsigned-integer type format specifier for a pointer
    printf("value of a is %d, its address is %p\n", a, address);//hexadecimal format specifier for a pointer
    printf("value of is %d\n", *(address));
    //printf("output of *a\n", *a);------>this gives compile time error
    return 0;

}