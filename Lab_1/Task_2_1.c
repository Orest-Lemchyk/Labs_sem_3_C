#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    puts("Input number:");
    scanf("%d", &n);

    if (n > 100) {
        printf("number %d is more than 100\n", n);
    } else {
        printf("number %d is less than 100\n", n);
    }
    
    system("pause");

    return 0;
}
