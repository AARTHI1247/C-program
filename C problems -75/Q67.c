67. Write a C program to merge two arrays.

#include <stdio.h>
int main() {
    int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++)
        scanf("%1d", &a[i]);
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++)
        scanf("%1d", &b[i]);
    for (int i = 0; i < n1; i++)
        printf("%d", a[i]);
    printf(" ");
    for (int i = 0; i < n2; i++)
        printf("%d", b[i]);
    return 0;
}

Input: 3 |123,3|456 → Output: 12 3456
Input: 2 | 56,2 12 Output: 56 12