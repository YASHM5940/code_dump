//q- to calvulate number of positive numbers in given array
#include <stdio.h>
#include <math.h>
void count( int *arr, int n){
    int a=0;
    int b=0;
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i]<=0)
        {
            a++;
        }
        else if (arr[i]>=0)
        {
            b++;
        }
        
       
        
    }
    printf("number of positive integers is:%d\n", b);
    printf("number of negative integers is:%d\n", a);
}

int main()
{
int arrr[]={1,2,-1,3,-2,2};
count(arrr, 6);

return 0;
}
//3d array q , multiplication table q --- ezz, see vedio