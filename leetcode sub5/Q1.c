#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr[10];      
    int cols[10];      
	int i,n,j;
    for ( i = 0; i < 10; i++) {

        printf("Enter number of columns for row %d: ", i + 1);
        scanf("%d", &n);
        cols[i] = n;  
        arr[i] = (int *) malloc(n * sizeof(int));

        if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i + 1);
            return 1;
        }

        for (j = 0; j < n; j++) {
            arr[i][j] = i + 1;
        }
    }

    printf("\n----- 2D ARRAY OUTPUT -----\n");
    for (i = 0; i < 10; i++) {
        printf("Row %d -> ", i + 1);
        for (j = 0; j < cols[i]; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        free(arr[i]);
    }

    return 0;
}
