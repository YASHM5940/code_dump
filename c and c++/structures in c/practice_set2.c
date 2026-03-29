#include <stdio.h>

typedef struct complexnumbers
{
    int real_part;
    int imaginary_part;

}co_nu;

void display(co_nu c){
    printf("the complex iumber is : %d + %d i\n", c.real_part , c.imaginary_part);
}

int main()
{
   co_nu c[3];
   for (int i = 0; i < 3; i++)
   {
    printf("enter the real part of complex-number%d :\n", i+1);
    scanf("%d", &c[i].real_part );
   }
   for (int i = 0; i < 3; i++)
   {
    printf("enter the imaginari part of complex-number%d :\n", i+1);
    scanf("%d", &c[i].imaginary_part );
   }
    for (int i = 0; i < 3; i++)
    {
       display(c[i]);
    }
    

return 0;
}