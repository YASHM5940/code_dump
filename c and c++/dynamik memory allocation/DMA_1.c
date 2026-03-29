// we wiil do mealloc function here.....i.e. "memory allocatio function"
#include <stdio.h>
#include <stdlib.h>//required to use maloc function

int main()
{
int *ptr;
ptr=(int *) malloc(4*sizeof(int));//this creates a size of "4" integerts in memory for ptr. this is void pointer which is typecasted to int by int*
//plz see vid for explaination
//this 4 void spaces we created using malloc ,then typecasted to int will now be assigned value using for loop

for (int i = 0; i < 4; i++)
{
    printf("enter the integer number_%d\n", i+1);
    scanf("%d", &ptr[i]);
}
for (int i = 0; i < 4; i++)
{
    printf("value the integer number_%d iz %d\n", i+1, ptr[i]);    
}

return 0;
}