#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    int arr[6]={4,2,-10,8,120,1}, x=0;
    float mid=0;
    for(int i=0; i<6; i++){
        if(arr[i]!= 0){
            mid+=arr[i];
            x+=1;
        }
    }
    mid = mid / x;
    printf("The arithmetic mean of an array is %f \n", mid);

    system("pause"); 
    return 0;
}
