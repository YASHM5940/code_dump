#include<stdio.h>
#include<math.h>

double calcLen(int a, int b, int c, int d)
{
    double dist=(sqrt(((c-a)*(c-a))+((b-d)*(b-d))));
    return dist;
    //TODO
}
int validTriangle(double a, double b, double c)
{
    int k;
    if (a+b>c && b+c>a && c+a>b)
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
        right=1;
        return right;
    }
    else
    {
        return 0;
    }
}



int triangleType(int a, int b, int c, int d,int e,int f)
{
    int type;

    double side1=sqrt((pow((a-c),2)+(pow((b-d),2))));
    double side2=sqrt((pow((a-e),2)+(pow((b-f),2))));
    double side3=sqrt((pow((c-e),2)+(pow((d-f),2))));

    double sides1=((pow((a-c),2)+(pow((b-d),2))));
    double sides2=((pow((a-e),2)+(pow((b-f),2))));
    double sides3=((pow((c-e),2)+(pow((d-f),2))));

    int right=righttriangle(side1,side2,side3);

    if (side1==side2 && side2==side3)
    {
        type=1;
        return type;
    }
    else if (right==1)
    {
        
    }
    
    

    
}


int main()
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter 3 coordinates for 3 points:\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);


    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);
    printf("side length1= %lf\n", side1);
    printf("side length2= %lf\n", side2);
    printf("side length3= %lf\n", side3);

    int valid = validTriangle(side1, side2, side3);
    printf("the triangle is : %d\n", valid);
    int right=righttriangle(side1, side2, side3);
    printf("the right triangle is %d\n", right);
    

    return 0;
    
}