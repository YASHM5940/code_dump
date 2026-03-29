#include <stdio.h>
int main()
{
    int ranking;
    printf("enter your ranking  (between 1-6)");
    scanf("%d", &ranking);
    switch (ranking)
    {
    case 1:
        printf("ur rating is 1\n");
        break;
    case 2:
        printf("ur rating is 2\n");
        break;
    case 3:
        printf("ur rating is 3\n");
        break;
    case 4:
        printf("ur rating is 4\n");
        break;
    case 5:
        printf("ur rating is 5\n");
        break;
    case 6:
        printf("ur rating is 6\n");
        break;
    default:
        printf(" ok");
    
    }
    return 0;
}
/*
see video and notes for explaination
*/