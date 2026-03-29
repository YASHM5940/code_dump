#include<stdio.h>
#include<math.h>
//program to print the equation of perpendicular bisector given a line segment in 2-D plane

double midpt(double x1, double y1, double x2, double y2)
{
    double midptx=(x1+x2)/2;
    double midpty=(y1+y2)/2;
    double slope=-1/((y1-y2)/(x1-x2));
    return 0;
}

int main()
{   
    double a,b;
    printf("enter 1st cordinates of line: ");
    scanf("%lf %lf", &a,&b);
    double c,d;
    printf("enter 2nd cordinates of line: ");
    scanf("%lf %lf", &c,&d);



    return 0;

}