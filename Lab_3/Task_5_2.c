#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 5
#define M 4
int main() {
    float A[N][M];
    int i, j, x;
    srand((unsigned)time(NULL));
    puts("Array A:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            *(*(A + i) + j) = rand() % 201 * 0.1f + 10.5f;
            printf("%8.1f", *(*(A + i) + j));
        }
        printf("\n");
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (A[i][j] > 15.5) {
                x += 1;
            }
        }
    }
    printf("the number of elements in the array that are greater than 15.5 is%d \n",x);
    system("pause");
    return 0;
}