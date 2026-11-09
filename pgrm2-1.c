
#include <stdio.h>
#include <string.h>

char str[100];
int i = 0;

int A() {
    if (str[i] == 'b') {
        i++;
        return A();
    }
    return 1;
}

int E() {
    if (str[i] == 'a') {
        i++;
        return A();
    }
    return 0;
}

int main() {
    printf("Enter the string: ");
    scanf("%99s", str);

    i = 0;

    if (E() && str[i] == '\0')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
