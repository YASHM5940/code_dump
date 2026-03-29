#include <stdio.h>
int main()
{
int car_number[5];

for (int i = 0; i <5; i++)
{
    printf("enter the car number of person%d :", i+1);
    scanf("%d", &car_number[i]);
}

return 0;
}
//array input using loops.we can give input without using loops also