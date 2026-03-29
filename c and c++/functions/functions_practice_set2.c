// q3-->
/* find the force exterted by earth on a body of mass 'm' in diffrent cases.(below, at , above earth's surface)
 */
#include <stdio.h>
#include <math.h>

float g_force(float m, float h, float c);

int main()
{
    float mass;
    printf("enter mass of object in kilograms\n");
    scanf("%f", &mass);

    float casse;
    printf("is mass \nabove earth's surface(press 1) \nbelow earth's surface(press 2) \nat earth's surface(press 3)\n");
    scanf("%f", &casse);

    float height;
    if (casse == 1)
    {
        printf("enter height in meter\n");
        scanf("%f", &height);
    }
    else if (casse == 2)
    {
        printf("enter depth in meter\n");
        scanf("%f", &height);
    }
    else
    {
        height = 64000000;
    }
    g_force(mass, height, casse);
    return 0;
}
float g_force(float m, float h, float c)
{
   float force;
    if (c==1)
    {
        force=(9.8*(m))/((1+(h/64000000))*(1+(h/64000000)));
    }
    else if (c==2)
    {
        force=(9.8*(m))/(1-h/64000000);
    }
    else{
        force=9.8*m;
    }
    printf("value of gravitational force on the body under given circumstance is %f newtons\n" , force);
return force;
}