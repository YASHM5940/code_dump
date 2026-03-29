#include <stdio.h>
// pratice for if loops   using logical oprators
int main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);
    if (age >= 90 || age <= 18)
    {
        printf(" sorry u cannot drive");
    }
    else
    {
        printf("no problem sir, u can drive");
    }
    if (age == 50)
    {
        printf("u have reached half centuary .plz renew license");
    }
    return 0;
}

/*
|| ---> is or oprator
&& ---> is and oprattttor
!  ---> is not oprator
*/