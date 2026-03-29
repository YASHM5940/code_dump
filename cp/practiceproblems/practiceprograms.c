//take side of square as input from user and calculate area

#include<stdio.h>
int main()
{
    double sideofsq, areaofsq;
    printf("enter the side of square: ");
    scanf("%lf", &sideofsq);
    areaofsq=sideofsq*sideofsq;
    printf("the area of square is : %lf", areaofsq);
    return 0;

}