
#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[20];
    char type[20];
    int value;
};

struct Symbol table[100];
int count = 0;

void insert() {
    int i;
    char name[20];

    printf("Enter variable name: ");
    scanf("%19s", name);

    for (i = 0; i < count; i++) {
        if (strcmp(table[i].name, name) == 0) {
            printf("Symbol already exists!\n");
            return;
        }
    }

    strcpy(table[count].name, name);

    printf("Enter data type: ");
    scanf("%19s", table[count].type);

    printf("Enter value: ");
    scanf("%d", &table[count].value);

    count++;

    printf("Symbol inserted successfully!\n");
}

void lookup() {
    char name[20];
    int i;

    printf("Enter symbol to search: ");
    scanf("%19s", name);

    for (i = 0; i < count; i++) {
        if (strcmp(table[i].name, name) == 0) {
            printf("Symbol found!\n");
            printf("Name: %s\n", table[i].name);
            printf("Type: %s\n", table[i].type);
            printf("Value: %d\n", table[i].value);
            return;
        }
    }

    printf("Symbol not found!\n");
}

void display() {
    int i;

    printf("\nSYMBOL TABLE\n");
    printf("Name\tType\tValue\n");

    for (i = 0; i < count; i++) {
        printf("%s\t%s\t%d\n",
               table[i].name,
               table[i].type,
               table[i].value);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n1.Insert\n2.Lookup\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: lookup(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
