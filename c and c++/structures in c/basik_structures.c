#include <stdio.h>
#include <string.h>
//for  theory see notes
struct first_structure
{
    int code_number;
    char name[100];
    int salary;
    int no_of_leaves;

};

int main()
{
    struct first_structure E1;

    printf("enter code for E1");
    scanf("%d", &E1.code_number);

     printf("enter name for E1");
    gets(E1.name);

     printf("enter salary for E1");
    scanf("%d", &E1.salary);

     printf("enter no_of_leaves for E1");
    scanf("%d", &E1.no_of_leaves);

    struct first_structure E2;
    
    printf("enter code for E2");
    scanf("%d", &E2.code_number);

     printf("enter name for E2");
    gets(E2.name);

     printf("enter salary for E2");
    scanf("%d", &E2.salary);

     printf("enter no_of_leaves for E2");
    scanf("%d", &E2.no_of_leaves);
    
    
   
    
return 0;
}