//calculate weight of a washer (used in nut and bolts)

#include<stdio.h>
#include<math.h>

double washerwt(double ir, double or, double ht, double density){
    const double pi=3.141;
    double area_of_washer=pi*(or-ir)*(or-ir);
    return (area_of_washer*ht*density);

}

int main()
{
    double a,b,c,d;
    printf("enter inner radius, outer radius, height, density of washer respectively: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("the wight of washer is: %lf", washerwt(a,b,c,d));
    return 0;

}