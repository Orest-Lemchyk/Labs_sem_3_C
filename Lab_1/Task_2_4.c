#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    puts("Input number of month( 1, 2, 3, ..., 12):"); scanf("%d",&x);

    switch(x) {
        case 1:
        case 2:
        case 12:
            printf("Winter vacation\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring semester\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer vacation\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Autumn semester\n");
            break;
        default:
            printf("Error! Allowed signs: 1, 2, 3, ..., 12\n");
    }

    system("pause");
    return 0;
}
