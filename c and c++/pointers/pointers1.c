#include <stdio.h>
int main()
{
    int i=99;
    int *j;
    j=&i;// j will store address of i
    printf("value of i is %d \n ", i);
    printf("value of i is %d  \n", *j);
    printf("address of i is %u \n", j);
     printf("address of i is %u \n", &i);
     printf("address of j is %u \n", &j);

    return 0;
}
