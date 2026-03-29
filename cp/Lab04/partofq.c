#include<stdio.h>
#include<math.h>

double calcLen(int a, int b, int c, int d)
{
    double dist=(sqrt(((c-a)*(c-a))+((b-d)*(b-d))));
    return dist;
    //TODO
}


int validTriangle(int a, int b, int c)
{
    int k;
    if (a+b>+c && b+c>=a && c+a>=b)
    {
        k=1;
        return k;

    }
    else
    {
        k=0;
        return k;
    }
}

int righttriangle(double a, double b, double c)
{
    int right;

    if (((a*a)+(b*b)==(c*c))||((b*b)+(c*c)==(a*a))||((c*c)+(a*a)==(b*b)))
    {
        printf("right angle\n");
        right=0;
        return right;
    }
    else{
        return 0;
    }
}

int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;

    printf("Enter 3 coordinates for 3 points:\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);

    printf("side of triangle are equal to: %lf %lf %lf \n", side1, side2, side3);

    int valid = validTriangle(side1, side2, side3);
    printf("triangle is : %d\n", valid);

    if (side1==side2 || side2==side3 || side1==side3)
    {
        printf("isoceles");
        if (righttriangle(side1,side2,side3))
        {
            printf("right works\n");
        }
        
        
    }
    
    return 0;
}