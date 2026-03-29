# include <stdio.h> 
#include<math.h>
int main()
{
int a= 45;//type declaraion instruction, subtype-int
int b=76;//type declaraion instruction, subtype-int
int c=a+2;//this is ALSO a decaration instruction coz u are declaring value of c and also a arithmatik instruction
printf("value of c is- %d\n", c); 
int z;
z=a*b;//legalll 
//  a*b=z ; this is illegal
 //other arithmatik orprators are +,-,*,/,%,
 // % in c is remainder oprator
 //there is no exponent oprator in c, "^"is a bit-wise oprator in c.
 int k;
 k=pow(2,5);
 //this is power function !!not a oprator!! to use this we also write include <math.h>
 printf("value of k is %d\n", k);
 


 //control insrtuctions- used to control which lines of code will be executed in which flow.ex- while, for , switch loops etc.done later

    return 0;
}
