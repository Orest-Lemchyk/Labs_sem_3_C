#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char subject[50];
    char teacher[50];
    char message2[200];
    int length = 0;

    
    printf("Enter the subject: ");
    fgets(subject, sizeof(subject), stdin);
    subject[strcspn(subject, "\n")] = '\0';

    printf("Enter the teacher's surname: ");
    fgets(teacher, sizeof(teacher), stdin);
    teacher[strcspn(teacher, "\n")] = '\0';

    sprintf(message2, "Consultation on %s by %s will take place on Wednesday during the fifth class.", subject, teacher);

    printf("\nFull message:\n%s\n", message2);

    while (message2[length] != '\0') {
            length++;
        }

    printf("The number of characters in the message is: %d\n", length);

    system("pause"); 
    
    return 0;
}