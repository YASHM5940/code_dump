#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


//A-Z=65 to 90
//a-z=97 to 112
//diffrence= 97-65=32
int main(){

    char st[50]="ABhbbbaHhbhhhA";
    printf("string is %s\n", st);
    tolower(*st);
    printf("string is %s\n", st);

    for (int i = 0; i < strlen(st); i++)
    {
       for (int j = 0; j < strlen(st); j++)
       {
        if (st[j]>st[i] )
        {
            char temp=st[j];
            st[j]=st[i];
            st[i]=temp;
            printf("string is %s\n", st);
        }
        
       }
       printf("string is %s\n", st);
        
    }

    printf("1st set of loops done\n");

    for (int k = 0; k < (strlen(st)); k++)
    {
        for (int l = k+1; l < strlen(st); l++)
        {
            char a=st[k];
            char b=st[l];
            int a_lower=(a>='a' && a<='z');
            int b_lower=(a>='a' && a<='z');
            int a_val=(a_lower ? a-'a':a-'A');
            int b_val=(b_lower ? b-'a':b-'A');
            if (a_val==b_val ? a_lower:a_val > b_val)
            {
                char temp=st[k];
                st[k]=st[l];
                st[l]=temp;
                printf("string is %s\n", st);
            }
            
            
        }
        
        
    }
    printf("string is %s\n", st);
    
    


    return 0;

}