#include <stdio.h>

int countOO(char **arr, int size) {
    int totalCount = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; arr[i][j]; j++) {
            if (arr[i][j] == 'o' || arr[i][j] == 'O') {
                totalCount++;
            }
        }
    }
    return totalCount;
}

int main() {
    char *fullName[3] = {"oLemchyko", "Orest", "Yuraovich"};

    int countO = countOO(fullName, 3);

    printf("Total number of letters 'o' in all rows: %d\n", countO);

    return 0;
}
