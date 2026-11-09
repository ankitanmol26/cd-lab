
#include <stdio.h>
#include <string.h>

int main() {
    char type[20];
    char value[20];

    printf("Enter data type (int/float/char): ");
    scanf("%19s", type);

    printf("Enter value: ");
    scanf("%19s", value);

    if (strcmp(type, "int") == 0) {
        int i = 0;

        if (value[0] == '-' || value[0] == '+')
            i++;

        if (value[i] == '\0') {
            printf("Invalid integer\n");
            return 0;
        }

        for (; value[i] != '\0'; i++) {
            if (value[i] < '0' || value[i] > '9') {
                printf("Type Mismatch Error\n");
                return 0;
            }
        }

        printf("Valid integer declaration\n");
    }

    else if (strcmp(type, "float") == 0) {
        int dot = 0, digit = 0, i = 0;

        if (value[0] == '-' || value[0] == '+')
            i++;

        for (; value[i] != '\0'; i++) {
            if (value[i] == '.' && !dot)
                dot = 1;
            else if (value[i] >= '0' && value[i] <= '9')
                digit = 1;
            else {
                printf("Type Mismatch Error\n");
                return 0;
            }
        }

        if (!digit) {
            printf("Type Mismatch Error\n");
            return 0;
        }

        printf("Valid float declaration\n");
    }

    else if (strcmp(type, "char") == 0) {
        if (strlen(value) == 1)
            printf("Valid character declaration\n");
        else
            printf("Type Mismatch Error\n");
    }

    else {
        printf("Invalid data type\n");
    }

    return 0;
}
