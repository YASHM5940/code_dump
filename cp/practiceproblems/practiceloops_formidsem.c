#include<stdio.h>

//function to find all factors of a number.
// void factors(int a)
// {
//     int factorlist[100];
//     int index=0;
//     for (int i = 1; i <=a; i++)
//     {
//         if (a%i==0)
//         {
//             factorlist[index]=i;
//             index++;
//         }
        
//     }

//     //printing the array
//     printf("the factors are: ");
//     for (int i = 0; i <= index-1; i++)
//     {
//         printf("%d ", factorlist[i]);
//     }
    
    
// }

//function which has loops + recursion
void experment(int a)
{
    for (int i = 0; i < a; ++i)
    {
        printf("%d: is the value of i b4 the next recursion\n", i);
        experment(i++);
        printf("%d: is the value of i\n", i);
    }
    
}

int main()
{
    int n;
    printf("Enter the number between 1 to 100: ");
    scanf("%d", &n);   
    experment(n);
    return 0;
}