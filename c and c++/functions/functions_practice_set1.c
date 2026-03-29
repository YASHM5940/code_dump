//q1 of functions practice set
#include <stdio.h>
int average(int a, int b, int c);
int main(int argc, char const *argv[])
{
    average(50 ,89 ,55);

    return 0;
}
int average(int a, int b, int c){
    int k,m;
    k=a+b+c;
    m=3;
    float result;
    result = (float) k/m;
    printf("%f", result, "is the average");
    return result;
}
// q2 skipped