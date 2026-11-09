
#include <stdio.h>

int main() {
    int choice;

    printf("1. Arithmetic Expression");
    printf("\n2. Procedure Call");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {

        printf("\nIntermediate Code:\n");
        printf("t1 = a + b\n");
        printf("t2 = t1 * c\n");

        printf("\nAssembly Code:\n");
        printf("MOV R0, a\n");
        printf("ADD R0, b\n");
        printf("MOV t1, R0\n");

        printf("MOV R0, t1\n");
        printf("MUL R0, c\n");
        printf("MOV t2, R0\n");

    }

    else if (choice == 2) {

        printf("\nIntermediate Code:\n");
        printf("PARAM a\n");
        printf("PARAM b\n");
        printf("CALL add\n");
        printf("RETURN\n");

        printf("\nAssembly Code:\n");
        printf("PUSH a\n");
        printf("PUSH b\n");
        printf("CALL add\n");
        printf("RET\n");

    }

    else {
        printf("Invalid choice\n");
    }

    return 0;
}

// Sample output 1 – Arithmetic
// 1. Arithmetic Expression
// 2. Procedure Call
// Enter choice: 1

// Intermediate Code:
// t1 = a + b
// t2 = t1 * c

// Assembly Code:
// MOV R0, a
// ADD R0, b
// MOV t1, R0
// MOV R0, t1
// MUL R0, c
// MOV t2, R0


// Sample output 2 – Procedure call
// Enter choice: 2

// Intermediate Code:
// PARAM a
// PARAM b
// CALL add
// RETURN

// Assembly Code:
// PUSH a
// PUSH b
// CALL add
// RET