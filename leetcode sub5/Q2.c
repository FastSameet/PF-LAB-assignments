//(i)   There are 6 total malloc calls.
//(ii)  Check if the first malloc failed and Check each row malloc.
/*
 p = malloc(sizeof(int*) * m);
    if (p == NULL) {
        return NULL;
    }

    int *block = malloc(sizeof(int) * m * n);
    if (block == NULL) {
        free(p);
        return NULL;
    }
*/
//(iii) free(p) only frees the pointer to row pointers, NOT the rows themselves. To fix this u must free each row first, then free(p).
/* void destroy_matrix(int **p) {
	int i;
    for (i = 0; i < m; i++)
        free(p[i]);
        free(p);
}
*/
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

