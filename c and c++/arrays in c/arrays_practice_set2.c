// revesing an array question
#include <stdio.h>

void reverse(int *arr, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp; // creates a temporory site/place to swap variables
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()

{
    int arrr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    reverse(arrr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("value of %d elemnt is: %d\n", i + 1, arrr[i]);
    }

    return 0;
}
