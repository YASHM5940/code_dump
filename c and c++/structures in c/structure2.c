//array of structures.used to create many structures at once
#include <stdio.h>
#include <string.h>
struct student
{
    int student_ID;
    char student_name[100];
    float percentage_marks;
    int klass;

};

int main()

{
struct student billiKiSkool[100];
//this is array of structures.used as we kannot define 100 students seprately
billiKiSkool[0].student_ID=1;
billiKiSkool[1].student_ID=2;
billiKiSkool[2].student_ID=3;
billiKiSkool[3].student_ID=4;

strcpy("boney",billiKiSkool[0].student_name);
strcpy("bluein",billiKiSkool[1].student_name);
strcpy("monku",billiKiSkool[2].student_name);
strcpy("doraemon",billiKiSkool[3].student_name);


// another way to make a structure()initialization---

// billiKiSkool[4]={5, "jagi", 78, 5};
struct student jagi ={5, "jagi", 78, 5};
return 0;
}