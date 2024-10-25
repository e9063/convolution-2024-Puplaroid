#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int NA, NF;
    scanf("%d %d", &NA, &NF);

    int *A = malloc(sizeof(int) * NA);
    int *F = malloc(sizeof(int) * NF);

    for (int i = 0; i < NA; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < NF; i++) {
        scanf("%d", &F[i]);
    }

    int lenR = NA - NF + 1;

    int *R = malloc(sizeof(int) * lenR);


    for (int i = 0; i < lenR; i++) {
        int sum = 0;
        for (int j = 0; j < NF; j++) {
            sum += A[i + j] * F[NF - 1 - j]; 
        }
        R[i] = sum;
    }
    for (int i = 0; i < lenR; i++) {
        printf("%d\n", R[i]);
    }

    free(R);
    free(F);
    free(A);

    return 0;
}
