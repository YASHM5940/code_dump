#include<stdio.h>
//practice iff conditionals
//fun to find max of 3 numbers
int max_marks(int x, int y, int z)
{
    if (x>y)
    {
        if (x>z)
        {
            
            return x;
        }
        else if (x<z)
        {
            
            return z;
        }
        
    }
    else if (x<y)
    {
        if (y>z)
        {
            
            return y;
        }
        else if (z>y)
        {
            
            return z;
        }
        
    }
    
}

int main()
{
    int m,w,c;
    printf("enter 3 integers: ");
    scanf("%d %d %d", &m, &w, &c);
    printf("highest number is %d", max_marks(m,w,c));
    return 0;

}