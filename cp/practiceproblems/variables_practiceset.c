#include<stdio.h>
int main()
{
    double time_for_100m;
    printf("enter time taken by athlete to cover 100m\n");
    scanf("%lf", &time_for_100m);
    double speed_in_meterspersec, speed_in_kmph;
    speed_in_meterspersec=(100/time_for_100m);
    speed_in_kmph=(speed_in_meterspersec*18/5);
    printf("speed of athlete is kmph is %lf\n", speed_in_kmph);

    return 0;

}