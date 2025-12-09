#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, newSize;
    int *arr;

    printf("Enter initial number of integers to store: ");
    scanf("%d", &n);

    arr = (int *) calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed! Exiting program.\n");
        return 1;
    }

    printf("\nMemory allocated successfully with calloc().\n");
    printf("All initial values are set to 0:\n");

    int i;
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    char choice;
    printf("\n\nDo you want to increase the size of the array? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y') {
        printf("Enter the new size of the array: ");
        scanf("%d", &newSize);

        int *temp = realloc(arr, newSize * sizeof(int));

        if (temp == NULL) {
            printf("Reallocation failed! Original memory is still safe.\n");
            free(arr); 
            return 1;
        }

        arr = temp;

        printf("\nMemory reallocated successfully!\n");

        for (i = n; i < newSize; i++) {
            printf("Enter value for element %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        n = newSize;
    }

    printf("\nUpdated array values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    printf("\n\nMemory freed successfully.\n");

    return 0;
}
