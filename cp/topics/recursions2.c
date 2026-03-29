#include<stdio.h>
#include<math.h>

//recursion program to find greatest common divisor of 2 elements

int GCD(int a, int b)
{
    if (a!=b)
    {
        if (a>b)
        {
            return GCD(a-b,b);
        }
        else
            return GCD(a,b-a);
        
    }
    
}

//recursions to check prime number

int chprime(int a, int b)
{
    
    if (a!=b)
    {
        if (a%b==0)
        {
            return b;
        }
        else if (a%b!=0)
        {
            chprime(a,b-1);
        }
        
        
    }
    else
        return b;
}






int main()
{
    int x,y;
    printf("enter a positive integer: ");
    scanf("%d", &x);
    printf("enter a positive integer: ");
    scanf("%d", &y);

    printf("the GCD is: %d\n", GCD(x,y));
    printf("%d\n", chprime(x,x-1));
    
    
    return 0;
}