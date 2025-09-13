#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int arr[15];
    int x = 0;
    srand(time(NULL));
     for (int i = 0; i < 15; i++) {
        arr[i] = (rand() % 81) - 40;  
    }
    printf("Random array:\n");
    for (int i = 0; i < 15; i++) {
        if (arr[i] < 0){
            x+=1;
        }
        printf("%d ", arr[i]);
    }
    
    printf("\n The number of negative numbers in the array is %d \n",x );
    
    system("pause"); 
    
    return 0;
}