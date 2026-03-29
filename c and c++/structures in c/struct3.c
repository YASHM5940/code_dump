#include <stdio.h>
#include <string.h>


//program ->functions + structures
//arrow function and pointers in structures-----see notes
struct employee
{
    int code_number;
    char name[100];
    int salary;
    int no_of_leaves;

};

// void showDetails(struct employee);
void show(struct employee emp){
    printf("the code num of employee is : %d\n", emp.code_number);
    printf("the code name of employee is : %s\n", emp.name);
    printf("the code salary of employee is : %d\n", emp.salary);
    printf("the code num of employee is : %d\n", emp.no_of_leaves);
};


int main()
{
    struct employee hiyu ={411, "gharelu_billa", 80000, 8};
    show(hiyu);
return 0;
}

