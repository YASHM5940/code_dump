#include <stdio.h>

int main()
//multidimentional arrays
{
    /*int maarks[4];
    maarks[0]=9;

   maarks[1]=8;

    maarks[2]=8;

    maarks[3]=7;

    for(int i=0; i<4;i++){

        printf("value of marks of student%d is %d\n", i+1, maarks[i]);


    }


 int *p;

    p=&maarks[0];

    for(int i=0; i<4; i++){

        p=&maarks[i];

printf("marks of students%d is %u\n", i+1, *p);

      printf("adress of  this integer stored is %u\n", p);

    }*/

    // multidimentional arrays
    printf("student1=jagi\n");

    printf("student2=sassu\n");
    printf("student3=panda\n");

    printf("student4=jajji\n");
    printf("student5=bluin\n");

    printf("student6=buney\n");
    printf("student7=chattin\n");

    printf("student8=ou-ou\n");
    printf("student9=fishu\n");

    printf("student10=doremon\n");
    printf("student11=monku\n");

    printf("student12=kitti\n");
    printf("student13=goddu\n");

    int student_number = 11;

    int subject_number = 2;

    int marks[11][2];

    for (int i = 0; i < 11; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            printf("enter marks of student%d in subject%d:\n ", i + 1, j + 1);

            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 11; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            printf("marks of student%d in subject%d is %d\n ", i + 1, j + 1, marks[i][j]);
        }
    }
}