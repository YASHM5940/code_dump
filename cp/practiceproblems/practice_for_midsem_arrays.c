#include<stdio.h>
//program to find the 2nd largest element in the array
//logic- sort the array in descending and get the 2nd element.

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
//swap the numbers function

// void descending_sort( int arr[], int len)
// {
//     int i, j;
//     for ( i = len; i >0; i--)
//     {
//         int j=i;
//         for (j = 0; j < len; j++)
//         {
//             if (arr[j]<arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }            
//         }       
//     }
//      printArray(arr, len); 
// }

//function to find which element occurs highest number of times in array
void max_count(int arr[], int len)
{
    int count=0;
    int maxcount=0;
    int the_number;
    printf("inside the function , outside loop\n");
    for (int i = 0; i < len-1; i++)
    {
        printf("inside 1st loop for %dth time", i+1);
        for (int j = 0; j < len-1; j++)
        {
            printf("inside 2nd loop for %dth time\n", i+j+2);
            if (arr[j]==arr[i])
            {
                count++;
            }
            
        }

        if (maxcount<count)
        {
            maxcount=count;
            the_number=arr[i];
            printf("the current max number and current frecency are: %d %d\n", the_number, max_count);
        }
        
        
    }
    
    printf("the element with max repetations is: %d , which occured %d times", the_number, maxcount);
    
}
int main()
{
    int arr[] = {5, 2, 2, 1, 4};
    int len = 5;
    printf("array made\n");
    max_count(arr,len);
    return 0;
}