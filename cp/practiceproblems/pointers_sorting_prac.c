#include<stdio.h>
#include<string.h>

//sorting an array using pointers
//insertion sort, bubble sort, selection sort.
void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n - 1; i++) { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
        // Swap the found minimum element with the first 
        // element 
        swap(&arr[min_idx], &arr[i]); 
    printArray(arr, n);
    } 
} 

void bubblesort(int arr[], int len)
{
    int i,j;
    for (i = 0; i < len-1; i++)
    {
        for (j =i+1; j< len; j++)
        {
            if (arr[i]>arr[j])
            {
             swap(&arr[j], &arr[i]);
            }
        }
    }
    
}

void insertionsort(int arr[], int len)
{
    
}
  


int main() 
{ 
    int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    // selectionSort(arr, n); 
    // printf("selection Sorted array: \n"); 
    // printArray(arr, n); this works, but commented out to see bubble sort
    printf("\n");
    bubblesort(arr, n); 
    printf("bubble Sorted array: \n"); 
    printArray(arr, n);
    return 0; 
}