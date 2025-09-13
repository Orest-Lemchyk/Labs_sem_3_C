#include <stdio.h>
#include <stdlib.h> 
int main(){
    int a, b, c, d, min;
    puts("Input value a, b, c, d:");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    min = a;

    if(b < min)
        min = b;
    if(c < min)
        min = c;
    if(d < min)
        min = d;

    if (min > 0){
        printf(" Number %d is smalest and > 0\n", min);
    }else{
        printf(" Number %d is smalest and < 0\n", min);
    }
    system("pause");
    return 0;

}