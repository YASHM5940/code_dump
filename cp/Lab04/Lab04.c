//Enter required header files
#include<stdio.h>
#include<math.h>

/**
 * @brief Returns the distance between the given two 2D points using the distance formula d((x1,y1), (x2,y2)) = sqrt((x1-x2)^2 + (y1-y2)^2).
 *
 * Example:
 * calcLen(1, -1, 1, 9) returns 10.00
 * calcLen(1, -1, 4, -1) returns 3.00
 * calcLen(1, 9, 4, -1) returns 10.44
 */
//Have the required parameters
double calcLen(int a, int b, int c, int d)
{
    double dist=sqrt((c-a)*(c-a))+((b-d)*(b-d));
    return dist;
    //TODO
}


/**
 * @brief Returns 1 if the triangle can be constructed given the 3 sides as parameters using the Triangle Inequality Theorem. 
 * If the triangle cannot be constructed, it returns 0.
 * 
 * The triangle inequality states that for any triangle, the sum of the lengths of any two sides must be greater than the length of the remaining side.
 * Note: It should be true for all three combinations of added side lengths, only then you will have a triangle.
 * 
 * Example:
 * validTriangle(3.00, 10.00, 10.44) returns 1
 * validTriangle(7.00, 10.00, 5.00) returns 1
 * validTriangle(5.00, 8.00, 3.00) returns 0
 */
//Have the required parameters
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
    //TODO
}


/**
 * @brief Takes the coordinates as parameters.
 * Returns 1 if the triangle is equilateral (all sides are equal)
 * Returns 2 if the triangle is isosceles right angled (2 sides are equal and the sides follow the pythagoras theorem)
 * Returns 3 if the triangle is isosceles (2 sides are equal and the sides do not follow the pythagoras theorem) 
 * Returns 4 if the triangle is right angled but not isosceles(The sides follow the pythagoras theorem)
 * Returns 5 if the triangle is scalene (All sides are different) 
 *  
 * Example:
 * triangleType(1, 0, 5, 0, 1, 4) returns 2
 * triangleType(-4, 0, 4, 0, 0, 3) returns 3
 * triangleType(1, -1, 4, -1, 1, 9) returns 4
 * triangleType(-4, 0, 3, 0, 0, 4) returns 5
 */
//Have the required parameters

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

//int type = triangleType(x1, y1, x2, y2, x3, y3);   double dist=sqrt((c-a)*(c-a))+((b-d)*(b-d));
int triangleType(int a, int b, int c, int d,int e,int f)
{
    int type;
    double sideA = calcLen(a,b,c,d);//double dist=sqrt((c-a)*(c-a))+((b-d)*(b-d));
    double sideB = calcLen(a,b,e,f);
    double sideC = calcLen(c,d,e,f);

   
    
    
    
    
    //TODO    
}

int main()
{
    //*******DO NOT CHANGE main()********
    
    int x1, y1;
    int x2, y2;
    int x3, y3;

    printf("Enter 3 coordinates for 3 points:\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    double side1 = calcLen(x1, y1, x2, y2);
    double side2 = calcLen(x1, y1, x3, y3);
    double side3 = calcLen(x2, y2, x3, y3);

    printf("%lf %lf %lf", side1, side2, side2);

    int valid = validTriangle(side1, side2, side3);

    /*if (valid == 0)
        printf("Triangle cannot be constructed.\n");

    else
    {
        printf("Triangle can be constructed.\n");
        int type = triangleType(x1, y1, x2, y2, x3, y3);
        if(type == 1)
            printf("This is an equilateral triangle.\n");
        else if(type == 2)
            printf("This is an isosceles right triangle.\n");
        else if(type == 3)
            printf("This is an isosceles triangle.\n");
        else if (type == 4)
            printf("This is a right angled triangle.\n");
        else if (type == 5)
            printf("This is a scalene triangle.\n");
    }*/
    return 0;
}