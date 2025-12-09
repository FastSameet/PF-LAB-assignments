#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;          // Pointer for dynamic array
    int n;             // Number of elements

    // Ask user for number of elements
    printf("Enter the number of integers you want to store: ");
    scanf("%d", &n);

    // Allocate memory using malloc()
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation failed
    if (arr == NULL) {
        printf("\nError! Memory allocation failed.\n");
        return 1;   // Exit the program
    }

    printf("\nMemory successfully allocated for %d integers.\n", n);

    // Take user input for array elements
    printf("\nEnter %d integers:\n", n);
    int i;
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display stored elements
    printf("\nYou entered the following integers:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);

    printf("\n\nMemory freed successfully. Program ending...\n");

    return 0;
}
