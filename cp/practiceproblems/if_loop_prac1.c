#include<stdio.h>
#include<math.h>
//program to find iff user entered number is perfect square.
int main()
{
    int x;
    printf("enter a integer: ");
    scanf("%d", &x);
    double y= sqrt(x);
    int z=sqrt(x);
    if (y==z)
    {
        printf("number is perfect square of: %lf\n", y);
    }
    else
    {
        printf("number is not a perfect square root\n");
    }

    return 0;

}