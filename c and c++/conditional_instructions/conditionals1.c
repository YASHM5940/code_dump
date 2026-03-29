#include <stdio.h>
//if loop used to check even or odd number
int main()
{
    int a,b;
    printf("enter the first number");
    scanf("%d", &a);
printf("enter the secound number");
    scanf("%d", &b);  
    if ( a%2==0)//put the coonditin over here within brakett...iff its true then only thing inside the loop will be executed or else not
    {
        /* code */
        printf("1st is a even number");

    }
     else
     {
        printf("1st is odd nuber");
     } 
    return 0;
}
