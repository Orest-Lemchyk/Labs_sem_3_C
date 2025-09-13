#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[5][4];
    int s2[4] = {0};
    int i, j;

    printf("Enter nums of massive 5x4:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    puts("Array arr[5][4]:");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++)
            printf("%5d", arr[i][j]);
        printf("\n");
    }

    printf("\nSum of positive odd elements in each column:\n");
    for (j = 0; j < 4; j++) {
        for (i = 0; i < 5; i++) {
            if (arr[i][j] > 0 && arr[i][j] % 2 != 0) {
                s2[j] += arr[i][j];
            }
        }
        printf("Column %d sum = %d\n", j, s2[j]);
    }

    system("pause");
    return 0;
}
