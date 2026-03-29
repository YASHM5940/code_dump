#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*void main(void)
{
    int a[] = {5,1,15,20,25};
    int b[]={1,2,3,4,5,6,7,8};
    int i,j,m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d %d %d\n", i, j, m);
    for(i = 1; i < 6; i++)
    {
        b[b[i]] = b[i];
        for(i = 0; i < 5; i++)
        {
            printf("%d", b[i]);
        }
    }
    return 0;// gives compile time vwarning but, runs normally
    //reason return type is void.

}*/

/*int main()
{
    char str1[50] = "Arnab";
    char str2[50];
    char *stptr = str1;
    char *ptr2 = str2;
    int i=-1;
 	
    while(*stptr != '\0')
    {
     	stptr++;
     	i++;
    }
    while(i>=0)
    {
     	stptr--;
     	*ptr2 = *stptr;
     	ptr2++;
     	--i;
    }
    *ptr2='\0';
    printf("%c\n",str2[2]);
    printf("%s\n",str2);
    return 0;
}*/

int count_times(FILE *fp,char key[])
{
    int count=0;
    rewind(fp);
    char ch=fgetc(fp);
    // printf("ch is%c", ch);
    while (ch!=EOF)
    {
        // printf("inside while");
        int is_full_word_same=0;
        int i;
        for (i=0; i < strlen(key); i++)
        {
            char ch1=fgetc(fp);
            printf("%c\n",ch1);
            if (ch1==key[i])
            {
                is_full_word_same++;
                
            }
            fseek(fp,1,SEEK_CUR);
            ch1=fgetc(fp);
        }
        if (is_full_word_same==strlen(key))
        {
           count++;
           printf("count number:%d\n", count);
        }
        ch=fgetc(fp);
    }
   return count; 
}

int main(){
    FILE* fp=fopen("test.txt" ,"r");
    char key[50];
    printf("enter search key:");
    scanf("%s", key);
    count_times(fp,key);

    return 0;
}