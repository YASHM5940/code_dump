#include <stdio.h>
int main()
{
int arrr[90];
int *ptr=&arrr[0];
ptr++;
if (ptr==&arrr[1]){
    printf("they point to same thing");

}
else{
    printf("they are not pointing to same element");
}
return 0;
}