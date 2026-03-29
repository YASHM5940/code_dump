#include<stdio.h>
#include<string.h>

//function to check palindrome
int check_pallindrome(char *s, int len)
{
    printf("%c\n", *s);
    printf("%c\n", *(s+len-1));
    int value=0;
    for (int i = 0; i < len/2; i++)
    {
        if (*s==*(s+len-1))
        {
            value++;
            printf("%d:is value\n", value);
        }       
    }
    if (value==len/2)
    {
        return 1;
    }
    
    
    return 0;
}
/* 
    function to swap 2 elements(has bugg)
    int arr[5]={1,30,40,50,60};    
    int *arr_1=&arr[0];
    int *arr_2=&arr[1];
    int *arr_3=&arr[2];
    int *arr_4=&arr[3];
    int *arr_5=&arr[4];
    printf("b4 swap\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int *temp;
    temp=arr_4;
    *arr_4=*arr_1;
    *arr_1=*temp;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("after swap\n");
/// @return 
*/
int main()
{
    char a[100];
    printf("enter string without space:");
    scanf("%s", &a);
    int k;
    k=strlen(a);
    printf("%d\n (1=pallindrome,0=not pallindrome)" ,check_pallindrome(a,k));

    return 0;
}