//program for timepass, find hcf&lcm of 2 given numbers
#include <stdio.h>

int LCM(int x, int y);
int HCF(int x, int y);
int main()
{
int a,b ;

printf("enter number1:\n");
scanf("%d", &a);

printf("enter number2:\n");
scanf("%d", &b);

if (a==b)
{
    printf("as both numbars are equal , the LCM & HCF are %d", a);

}
else if (a>b)
{
    HCF(a,b);
    LCM(a,b);
}
else if (b>a)
{
    HCF(b,a);//as function takes in first integer as greater walla number amoung the 2
    LCM(a,b);
}


return 0;
}

int LCM(int x, int y){
    //here we assume x>y, (as we can inter change x&y in program whnever nedded)
    int k;
    if (x%y==0)
    {
        printf("the lcm of entered numbars iz :%d\n", x);

        return x;
    }
    else if ((x%y)!=0)
    {
        for (int i = x; i <=(x*y); i++)
        {
            if (i%x==0 && i%y==0)
            {
                printf("the lcm iz: %d\n", i);
                return i;
            }
            
        }
        
    }
    else {
        printf("error, plz enter valid input\n");
        return 0;
    }

}
int HCF(int x, int y){
    //here we assume x>y, (as we can inter change x&y in program whnever nedded)
    int k;
    if (x%y==0)
    {
        printf("the HCF of entered numbars iz :%d\n", y);

        return y;
    }
    else if ((x%y)!=0)
    {
        for (int i = y; i >0; i--)
        {
            if (x%i==0 && y%i==0)
            {
                printf("the hcf iz: %d\n", i);
                return i;
            }
            
        }
        
    }
    else {
        printf("error, plz enter valid input\n");
        return 0;
    }
    //hcf logik working . no problem here.s
}