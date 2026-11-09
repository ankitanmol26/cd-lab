
#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int priority(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

int main() {
    char infix[100], c;
    int i;

    printf("Enter infix expression: ");
    scanf("%99s", infix);

    printf("Postfix expression: ");

    for (i = 0; infix[i] != '\0'; i++) {
        c = infix[i];

        if (isalnum(c)) {
            printf("%c", c);
        }
        else if (c == '(') {
            push(c);
        }
        else if (c == ')') {
            while (top != -1 && stack[top] != '(')
                printf("%c", pop());

            if (top == -1) {
                printf("\nInvalid expression\n");
                return 0;
            }
            pop();
        }
        else if (c == '+' || c == '-' ||
                 c == '*' || c == '/') {

            while (top != -1 && stack[top] != '(' &&
                   priority(stack[top]) >= priority(c)) {
                printf("%c", pop());
            }

            push(c);
        }
        else {
            printf("\nInvalid character\n");
            return 0;
        }
    }

    while (top != -1) {
        if (stack[top] == '(') {
            printf("\nInvalid expression\n");
            return 0;
        }
        printf("%c", pop());
    }

    printf("\n");

    return 0;
}
