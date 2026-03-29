//make a function to calculate hypotenuse from entering sides
#include<stdio.h>
#include<math.h>


double hyp(double x, double y){
    double hypotenuse=sqrt((x*x)+(y*y));
    return hypotenuse;

}


int main()
{
    double a,b;
    printf("enetr the side1 of triangle: ");
    scanf("%lf", &a);
    printf("eneter side2 of triangle: ");
    scanf("%lf",&b);
    printf("the hypotenuse length is: %lf", hyp(a,b));
    return 0;

}