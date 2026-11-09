
#include <stdio.h>
#include <string.h>

struct Frame {
    char name[20];
    int local;
};

struct Frame stack[100];
int top = -1;

void call() {
    if (top == 99) {
        printf("Stack Overflow!\n");
        return;
    }

    top++;

    printf("Enter procedure name: ");
    scanf("%19s", stack[top].name);

    printf("Enter local variable value: ");
    scanf("%d", &stack[top].local);

    printf("Procedure called successfully!\n");
}

void returnProc() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return;
    }

    printf("Returning from procedure: %s\n",
           stack[top].name);

    top--;
}

void display() {
    int i;

    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }

    printf("\nMEMORY STACK\n");

    for (i = top; i >= 0; i--) {
        printf("Procedure: %s  Local: %d\n",
               stack[i].name,
               stack[i].local);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Procedure Call");
        printf("\n2. Procedure Return");
        printf("\n3. Display Stack");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                call();
                break;

            case 2:
                returnProc();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}


// 1. Procedure Call
// 2. Procedure Return
// 3. Display Stack
// 4. Exit

// Enter choice: 1
// Enter procedure name: main
// Enter local variable value: 10
// Procedure called successfully!

// Enter choice: 1
// Enter procedure name: fun1
// Enter local variable value: 20
// Procedure called successfully!

// Enter choice: 1
// Enter procedure name: fun2
// Enter local variable value: 30
// Procedure called successfully!

// Enter choice: 3

// MEMORY STACK
// Procedure: fun2  Local: 30
// Procedure: fun1  Local: 20
// Procedure: main  Local: 10

// Enter choice: 2
// Returning from procedure: fun2

// Enter choice: 3

// MEMORY STACK
// Procedure: fun1  Local: 20
// Procedure: main  Local: 10