#include <stdio.h>
void goodmorning();
void goodafternoon();
int main()
{
    printf("initializing functions\n");
    goodafternoon();
        goodmorning();
    
    return 0;
}
void goodafternoon(){
    printf(" good afternoon man!\n");
}

void goodmorning(){
    printf("guid mornin\n");
}