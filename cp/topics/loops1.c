#include<stdio.h>
#include<math.h>


void star(int a)
{
    if(a>0)
    {
       printf("*");
       star(a-1);
    }
}

void pattern(int n)
{
    int m=1;
    if (n>0)
    {
        star(n);
        printf("\n");
        pattern(n-1);
        
    }
    else
    {
        star(m);
        pattern(m+2);
    }
    
    
    
}

int main()
{
    int x;
    printf("enter a positive integer:\n");
    scanf("%d", &x);
    pattern(x);
    return 0;
}