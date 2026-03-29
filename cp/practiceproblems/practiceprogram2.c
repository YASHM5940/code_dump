// take 3 characters from user and print them in reverse

#include<stdio.h>
int main()
{
    int x;
    x=0;
    char d;
    char b;
    char a;
    printf("enter 3 characters\n");
    scanf("%c %c %c", &d, &b, &a);
    printf("u entered the characters- %c\n %c\n %c\n", a,b,d);
   return 0;
}