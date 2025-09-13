#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, N;

    printf("Input the size of the square matrix: ");
    scanf("%d", &N);

    int **matr = (int **)malloc(N * sizeof(int *));
    if (matr == NULL) {
        puts("Error!");
        return -1;
    }
    for (i = 0; i < N; i++) {
        matr[i] = (int *)malloc(N * sizeof(int));
        if (matr[i] == NULL) {
            puts("Error!");
            return -2;
        }
    }

    puts("\nInput the elements of the matrix matr:");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &matr[i][j]);

    puts("\n\tMatrix matr:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%8d", matr[i][j]);
        printf("\n");
    }

    int **mas = (int **)malloc(N * sizeof(int *));
    if (mas == NULL) {
        puts("Error!");
        return -1;
    }
    for (i = 0; i < N; i++) {
        mas[i] = (int *)malloc(N * sizeof(int));
        if (mas[i] == NULL) {
            puts("Error!");
            return -2;
        }
    }

    srand((unsigned)time(NULL));
    puts("\n\tMatrix mas:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            mas[i][j] = rand() % 101 - 50;
            printf("%8d", mas[i][j]);
        }
        printf("\n");
    }

    int **more = (int **)malloc(N * sizeof(int *));
    if (more == NULL) {
        puts("Error!");
        return -1;
    }
    for (i = 0; i < N; i++) {
        more[i] = (int *)malloc(N * sizeof(int));
        if (more[i] == NULL) {
            puts("Error!");
            return -2;
        }
    }

    puts("\nValues of elements of matrix more:");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (mas[i][j] < matr[i][j]){
                more[i][j] = matr[i][j];
            }else{
                more[i][j] = mas[i][j];
            }
            
            printf("%8d", more[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        free(matr[i]);
        free(mas[i]);
    }
    free(matr);
    free(mas);

    return 0;
}