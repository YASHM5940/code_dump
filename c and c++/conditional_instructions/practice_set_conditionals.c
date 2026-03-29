//q1 done on video
//q2---->


#include <stdio.h>
int main()
{
    int phy,chem,math;
    printf("enter physics marks\n");
    scanf("%d", &phy);
    printf("enter chemistry marks\n");
    scanf("%d", &chem);
    printf("enter maths marks\n");
    scanf("%d", &math);

    if (phy+chem+math<=120)
    {
        printf("congats !! u are fail !!");
    }
    else if (phy<=33 || chem<=33 || math<=33)
    {
        printf("congrats!! you are fail ");
    }
    else{
        printf(" you have passed");
    }

    return 0;
}
