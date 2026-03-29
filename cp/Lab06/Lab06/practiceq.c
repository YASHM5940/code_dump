#include<stdio.h>
#include<math.h>

int value;

//decimal number to binary, make a recursive function
int decimalToBinary(int a)
{
    //it is achived by thaking remainders after dividing the given number by 2.
    int b;
    if (a>0)
    {
        b=a%2;
        return b+10*(decimalToBinary(a/2));
    }
    else
    {
        return 0;
    }
    
    
}


//the chonky recursive function

char calculator(int balance)
{  
    printf("Balance: %d\n", balance);//This statement needs to be there in the function. You can however change the position of this statement.
    
    char calcoption;
    printf("enter a option\n + or - or e or c: ");
    getchar();
    scanf("%c", &calcoption);
    

    if (calcoption!='+' && calcoption!='-' && calcoption!='e' && calcoption!='c')
    {
        return 0;
    }
    else if (calcoption=='+')
    {
        
        printf("enter value to be added\n");
        scanf("%d", &value);
        printf("value added to balence is %d\n", value);
        return(calculator(balance+value));
    }
    else if (calcoption=='-')
    {
        
        printf("enter value to be subtracted\n");
        scanf("%d", &value);
        value=-value;
        printf("value subtracted to balence is %d\n", value);
        return(calculator(balance+value));
    }
   else if (calcoption=='c')
    {
        printf("%d", value);
        return calculator(balance-value);
    }
    else if (calcoption=='e')
    {
        return balance;
    }
    
    
    
    
    
}

int main()
{
    int x,y;
    printf(" enter a number: ");
    scanf("%d", &x);
    y=x;
    printf("%d\n", decimalToBinary(x));
    calculator(y);
    return 0;

}