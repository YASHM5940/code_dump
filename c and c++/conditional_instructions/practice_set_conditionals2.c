#include <stdio.h>
int main(int argc, char const *argv[])
{
    // typecasting mein "lower case a-z" are converted to "97-122"
    char word;
    printf("enter the word ");
    scanf("%c", &word);
    if (word<=122 && word>=97)
    {
        printf("its in lower case");
    }
    else{
        printf("its not in lower case");
    }
    return 0;
}
