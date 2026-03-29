#include <stdio.h>
//q1,q2 - make a 2d vektor using strings and mke a function to add them
struct vektor
{
    int x, y;
};

struct vektor sumVector(struct vektor v1, struct vektor v2)
{
    struct vektor resultt;
    resultt.x = v1.x + v2.x;
    resultt.y = v1.y + v2.y;
    return resultt;
}
int main()

{
    struct vektor v1, v2;

    v1.x = 8;
    v1.y = 9;
    printf("component of v1 in x direction is :%d, and in y direction is :%d\n", v1.x, v1.y);
    v2.x = 7;
    v2.y = 6;
    printf("component of v2 in x direction is :%d, and in y direction is :%d\n", v2.x, v2.y);

    sumVector(v1, v2);

    return 0;
}