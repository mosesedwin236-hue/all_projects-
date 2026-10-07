#include <stdio.h>

int main() {
    int mark;
    char choice;
    char grade;

    do {
        
        do {
            printf("Enter a student's mark (0-100): ");
            scanf("%d", &mark);

            if (mark < 0 || mark > 100) {
                printf("Error: Invalid mark! Please enter a value between 0 and 100.\n\n");
            }
        } while (mark < 0 || mark > 100);


        if (mark >= 80) {
            grade = 'A';
        } else if (mark >= 70) {
            grade = 'B';
        } else if (mark >= 60) {
            grade = 'C';
        } else if (mark >= 50) {
            grade = 'D';
        } else {
            grade = 'F';

return 0;
}
