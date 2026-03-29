/* q1-q4 see vid*/

#include <stdio.h>
int main()
{
    // sum of natural num   q
    int a;
    printf("enter the required number ");
    scanf("%d", &a);

    int sum = 0;
    for (int i = 0; i <= a; i++)
    {
        sum += i;
    }
    printf("sum of first n natural numbers is %d\n", sum);

    // factorial q

    int b = 0;
    int factorial = 1;
    for (b = 1; b <= a; b++)
    {
        factorial *= b;
    }
    printf("value of factorial is %d\n", factorial);
    // prime num finding q

    int prime = 0;
    int c;
    for (c = 2; c < a; c++)
    {
        if (a % c == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        printf("the given number ,%d, is not prime", a);
    }
    else
    {
        printf("the given number ,%d, is  prime", a);
    }
    return 0;
}
