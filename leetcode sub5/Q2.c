#include <stdio.h>
#include <stdlib.h>


//(i)   Total malloc calls = 6.
//(ii)  Check if the first malloc failed and Check each row malloc.
//(iii) free(p) only frees the pointer to row pointers, NOT the rows themselves.Fo fix this u must free each row first, then free(p).

//(iv)
int **create_matrix(int m, int n) {
    int **p;

    p = malloc(sizeof(int*) * m);
    if (p == NULL) {
        return NULL;
    }

    int *block = malloc(sizeof(int) * m * n);
    if (block == NULL) {
        free(p);
        return NULL;
    }
	int i;
    for (i = 0; i < m; i++) {
        p[i] = block + (i * n);
    }

    return p;
}

void destroy_matrix(int **p) {
    if (p != NULL) {
        free(p[0]);
        free(p);    
    }
}

int main() {
    int m = 5, n = 4;
	  int i,j;
    int **mat = create_matrix(m, n);

    if (mat == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            mat[i][j] = i + 1;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    destroy_matrix(mat);

    return 0;
}
