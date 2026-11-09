
#include <stdio.h>

int main() {
    int choice;

    printf("1. IF statement");
    printf("\n2. WHILE statement");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {

        printf("\nThree Address Code:\n");

        printf("if a < b goto L1\n");
        printf("goto L2\n");
        printf("L1: t1 = a + b\n");
        printf("c = t1\n");
        printf("L2:\n");

    }

    else if (choice == 2) {

        printf("\nThree Address Code:\n");

        printf("L1: if a < 5 goto L2\n");
        printf("goto L3\n");
        printf("L2: t1 = a + 1\n");
        printf("a = t1\n");
        printf("goto L1\n");
        printf("L3:\n");

    }

    else {
        printf("Invalid choice\n");
    }

    return 0;
}
