#include <stdio.h>
void goodmorning();
void goodafternoon();
int main()
{
    printf("initializing functions\n");
    
        goodmorning();
    
    return 0;
}
void goodafternoon(){
    printf(" good afternoon man!\n");
}

void goodmorning(){
    goodafternoon();
    printf("guid mornin\n");
}
// to understand the diff between 1st and dis program see vedio & notes
//functions ka part ka full video watch 