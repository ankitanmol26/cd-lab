#include <stdio.h>

int main()
{
    char exp[20], op;
    int i = 0, t = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    while (exp[i] != '\0')
    {
        if (exp[i] == '+' || exp[i] == '-' ||
            exp[i] == '*' || exp[i] == '/')
        {
            op = exp[i];

            printf("t%d = %c %c %c\n",
                   t, exp[i-1], op, exp[i+1]);

            t++;
            i++;
        }
        else
            i++;
    }

    return 0;
}