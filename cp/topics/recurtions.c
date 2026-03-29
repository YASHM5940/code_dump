#include<stdio.h>
#include<math.h>

int power(int n, int m)
{
    int ans=1;//this is the terminationg condition
    if(m>0)// gives last time where fuction would be called
        ans=n*power(n, m-1);
    
    return ans;
    //if we dont return ans, the scope of ans only lies in the previous function call's stack. hence it will n ot return anything and print garbage value
}

int digit_count(int n)
{
    int x=0;
    if((n/10)>=1)
        x=digit_count(n/10);

    return x+1;
}
int main()
{
    int x, y;
    x=5576777,y=2;
    //printf("%d\n", power(x,y));
    printf("%d\n", digit_count(x));

    return 0;

}