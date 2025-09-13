#include <stdio.h>
#include <stdlib.h>

int main() {
    char s;

    puts("Input firs letter of Asian country ( J, I, C, T, V)");
    s = getchar();

    switch(s) {
        case 'J':
        case 'j':
            printf("Japan\n");
            break;
        case 'I':
        case 'i':
            printf("India\n");
            break;
        case 'C':
        case 'c':
            printf("China\n");
            break;
        case 'T':
        case 't':
            printf("Thailand\n");
            break;
        case 'V':
        case 'v':
            printf("Vietnam\n");
            break;
        default:
            printf("Error! Allowed signs: J, I, C, T, V\n");
    }

    system("pause");
    return 0;
}
