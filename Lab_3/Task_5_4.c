#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    long *arr = (long *)malloc(n * sizeof(long));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 10001 - 5000;
    
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    system("pause");
    
    return 0;
}