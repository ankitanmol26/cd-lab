
#include <stdio.h>

int main() {

    printf("LL(1) PARSING TABLE\n");
    printf("-------------------\n");

    printf("Non-Terminal  a       b       c       $\n");

    printf("S             S->aA   S->b    -       -\n");
    printf("A             -       -       A->c    -\n");

    printf("\nLR(1) PARSING TABLE\n");
    printf("-------------------\n");

    printf("State   a    b    c    $    GOTO S   GOTO A\n");

    printf("0       s2   s3   -    -       1        -\n");
    printf("1       -    -    -    acc     -        -\n");
    printf("2       -    -    s5   -       -        4\n");
    printf("3       -    -    -    r2      -        -\n");
    printf("4       -    -    -    r1      -        -\n");
    printf("5       -    -    -    r3      -        -\n");

    printf("\nCOMPARISON\n");
    printf("----------\n");

    printf("LL(1) is a top-down parser.\n");
    printf("LR(1) is a bottom-up parser.\n");
    printf("LL(1) uses leftmost derivation.\n");
    printf("LR(1) uses rightmost derivation in reverse.\n");
    printf("Both use one lookahead symbol.\n");

    return 0;
}
