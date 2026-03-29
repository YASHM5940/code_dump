// read pdf b4 revising this 
#include <stdio.h>
int main()
{
int i=33;
int *ptr=&i;
printf("value of ptr(adress of i) is %u\n", ptr);
ptr++;
printf("value of ptr(after ptr++) is %u\n", ptr);
//this occurs as memory size of integer in th disc is "4"...so next site will be +4 when ptr++ is done .
//ptr is not integer , it is ointer .hence on ptr++ , the next size avilable in the memory is assigned to it.
//(in this computer it is 4 , it may differ in other)
char billi_ki_duumm='9';
char *ptr1= &billi_ki_duumm;
printf("value of ptr1(adress of billi_ki_duumm) is %u\n", ptr1);
ptr1--;
printf("value of ptr1(after ptr++) is %u\n", ptr1);
//this shows size of char on disc is 1  
//IMP--dont use int for gettin address od char ...use -->char *(name of pointr)=&(name of char)
return 0;
}