#include <stdio.h>
void swap(int *a, int *b);     // corect way to swap variables
void wrong_swap(int a, int b); // wrong way or non-working way to swap variables

int main()
{
    int x = 3, y = 9;
    printf("value of x and y b4 swap is respectivly is %d , %d\n ", x, y);

    wrong_swap(x, y);

    printf("value of x and y after wrong swap respectivly is %d , %d\n ", x, y);

    swap(&x, &y);
    printf("value of x and y after correct swap respectivly is %d , %d ", x, y);
    
    


    return 0;
}

void swap(int *a, int *b)
{int temp;
temp=*a;
*a=*b;
*b=temp;
//this works as its "call by address function"
}

void wrong_swap(int a, int b)
{   int temp;
temp=a;
a=b;
b=temp;
//this doesnt work as this is "call by value function"
}