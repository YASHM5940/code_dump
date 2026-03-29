#include <stdio.h>
int main()
{
    int a=10;
    while (a>0)
    {
        printf("%d\n", a);
        a--;
    }
    int b=0;
    do
    {
        
        b++;
        printf("%d\n", b);
    } while (10>b);
    
    return 0;

}
