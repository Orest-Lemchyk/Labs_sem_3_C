#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[8]= {500} ;
    int x = arr[0];
    
   for (int i = 1; i < 8; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
   }
    
    for (int i = 0; i < 8; i++){
        if (arr[i] < x && arr[i] % 5 == 0){
            x = arr[i];
        }
    }

    printf("The smalest number it can division  by 5 and get 0 remainder is %d \n",x );
    
    system("pause"); 
    
    return 0;
}