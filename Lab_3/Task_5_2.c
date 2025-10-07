#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 4

int count(float **A, int rows, int cols) {
    int cnt = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] > 15.5f) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    float A[N][M];
    float *ptrA[N];
    srand((unsigned)time(NULL));

    puts("Array A:");
    for (int i = 0; i < N; i++) {
        ptrA[i] = A[i];
        for (int j = 0; j < M; j++) {
            A[i][j] = 10.5f + (rand() % 201) * 0.1f;
            printf("%8.1f", A[i][j]);
        }
        printf("\n");
    }

    int x = count(ptrA, N, M);
    printf("The number of elements greater than 15.5 is %d\n", x);

    return 0;
}