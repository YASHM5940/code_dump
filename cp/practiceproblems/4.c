#include<stdio.h>
#include<stdlib.h>
void f(int x, int* y, int** z)
{
    // printf("%p\n", *z);
    y=malloc(sizeof(int));
    // printf("%p\n", *z);
    **z=4;
    **z +=1;
    x+=2;
    *y +=3;

}

int main()
{
    int x=5;
    int *y=&x;
    int **z=&y;
    f(x,y,z);
    printf("%d %d %d\n", x, *y, **z);
    return 0;

}