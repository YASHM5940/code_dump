// learn to use scanf function
#include <stdio.h>
int main()
{
    // this func is usssed to take input from user
    float f;
    int a;

    printf("enter required integer\n");
    scanf("%d", &a);
    printf("enter te decimal number");
    scanf("%f", &f);
    // "&" symbol is used to define address of the variable to which user is assigning the value.
    // for the compiler & means "address of a" or "address of f"
    return 0;
}
