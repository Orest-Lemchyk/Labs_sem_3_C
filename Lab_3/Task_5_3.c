#include <stdio.h>
#include <string.h>

int main() {

    char *fullName[3] = {"oLemchyko", "Orest", "Yuraovich"}
    , *firstRow = fullName[0];
    int countO = 0;

    for (int i = 0; firstRow[i]; i++) {
        if (firstRow[i] == 'o' || firstRow[i] == 'O') {
            countO++;
        }
    }

    printf("Number of letters 'o' in the first row: %d\n", countO);

    return 0;
}
