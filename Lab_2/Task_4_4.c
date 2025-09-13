#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr[10];
    int temp;
    srand(time(NULL));
     for (int i = 0; i < 10; i++) {
        arr[i] = (rand() % 81) - 40;  
    }
    printf("Random array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
        for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    system("pause"); 
    
    return 0;
}