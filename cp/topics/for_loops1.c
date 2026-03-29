#include<stdio.h>


//using recursions
int count(int a)
{
    int ans;
    if (a<0)
    {
        ans=1;
    }
    else 
    {
        ans=1+count(a/10);
    }

    return ans;    
}

//using while loop
int count_digits(int n)
{
    int ans=1;
    while (n>9)
    {
       ans++; 
       n/=10;
    }
    return ans;
    
}

//program that takes 2 integers, 2nd one smaller than 1st


int main()
{
    //int a=112;
    //printf("%d\n", count_digits(a));

    int x,y,z;
    printf("enter 1st number:");
    scanf("%d", &x);
    y=0;
    while (y<x)
    {
        printf("enter a smaller number:");
        scanf("%d", &y);

    }

    printf("sum of entered numbers is:%d", x+y);    
    return 0;
}