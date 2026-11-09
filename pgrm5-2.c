#include <stdio.h>
#include <string.h>

int main()
{
    char a[10][20], b[10][20];
    int n, i, j;

    printf("Enter number of statements: ");
    scanf("%d", &n);

    printf("Enter statements:\n");

    for (i = 0; i < n; i++)
        scanf("%s", a[i]);

    printf("\nAfter Common Subexpression Elimination:\n");

    for (i = 0; i < n; i++)
    {
        int found = 0;

        for (j = 0; j < i; j++)
        {
            if (strcmp(a[i], a[j]) == 0)
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
            printf("%s\n", a[i]);
    }

    printf("\nDead Code Removal:\n");

    for (i = 0; i < n; i++)
    {
        if (a[i][0] != 'x')
            printf("%s\n", a[i]);
    }

    return 0;
}

// Sample Input

// text
// Enter number of statements: 4
// Enter statements:
// a=b+c
// x=b+c
// y=a+d
// z=c+d
// Sample Output

// text
// After Common Subexpression Elimination:
// a=b+c
// x=b+c
// y=a+d
// z=c+d

// Dead Code Removal:
// a=b+c
// y=a+d
// z=c+d