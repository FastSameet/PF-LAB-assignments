#include <stdio.h>
int main() 
{
    int arr[10], i, sorted = 1;

    for (i = 0; i < 10; i++) 
    {
        printf("Enter %d number: ",i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < 10; i++) 
    {
        if (arr[i] < arr[i - 1]) 
        {
            sorted = 0;
            break;
        }
    }
    if (sorted == 1)
        printf("Array is sorted in ascending order");
    else
        printf("Array is not sorted in ascending order");
    return 0;
}
