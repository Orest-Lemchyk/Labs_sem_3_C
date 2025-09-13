#include<stdio.h>
#include <stdlib.h>      
int main()
{
    int x;
    puts("Input value:"); scanf("%d",&x); 
    if(x % 2 == 0){
        if(x>0){ 
            printf("Value %d > 0 and odd\n",x);
        }else{
            printf("Value %d < 0 and odd\n",x);
        }
    }else{
        if(x< 25){
            printf("Value %d even and < 25\n",x);
        }else{
            printf("Value %d even and >= 25\n",x);
        }
    }

    system("pause"); 
    
    return 0;
}
