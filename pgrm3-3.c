
#include <stdio.h>
#include <string.h>

int main() {
    char lhs[20], t1[20], t2[20], op;
    char lhsType[10], type1[10], type2[10];
    char resultType[10];

    printf("Enter assignment variable: ");
    scanf("%19s", lhs);

    printf("Enter assignment variable type (int/float): ");
    scanf("%9s", lhsType);

    printf("Enter first operand and its type: ");
    scanf("%19s %9s", t1, type1);

    printf("Enter operator (+ or -): ");
    scanf(" %c", &op);

    printf("Enter second operand and its type: ");
    scanf("%19s %9s", t2, type2);

    // Check arithmetic operand types
    if ((strcmp(type1, "int") != 0 &&
         strcmp(type1, "float") != 0) ||
        (strcmp(type2, "int") != 0 &&
         strcmp(type2, "float") != 0)) {
        printf("Invalid operand type\n");
        return 0;
    }

    if (op != '+' && op != '-') {
        printf("Invalid operator\n");
        return 0;
    }

    // Calculate expression type
    if (strcmp(type1, "float") == 0 ||
        strcmp(type2, "float") == 0) {
        strcpy(resultType, "float");
    }
    else {
        strcpy(resultType, "int");
    }

    printf("\nExpression type: %s\n", resultType);

    // Assignment type checking
    if (strcmp(lhsType, resultType) == 0 ||
        (strcmp(lhsType, "float") == 0 &&
         strcmp(resultType, "int") == 0)) {

        printf("Type checking successful\n");
        printf("%s = %s %c %s\n", lhs, t1, op, t2);
    }
    else {
        printf("Type mismatch error\n");
    }

    return 0;
}


// Enter assignment variable: c
// Enter assignment variable type (int/float): int
// Enter first operand and its type: a int
// Enter operator (+ or -): +
// Enter second operand and its type: b int

// Expression type: int
// Type checking successful
// c = a + b