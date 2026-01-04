74. Write a C program to perform matrix addition.

#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            c[i][j] = a[i][j] + b[i][j];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (j > 0) printf(" ");
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


Input:
12 34
56+7 8
Output:
46
12 14
Input:
11 22
11+ 22
Output:
33
33