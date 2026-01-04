66. Write a C program to remove duplicate elements from an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], result[n];
    int k = 0;
    for (int i = 0; i < n; i++)
        scanf("%1d", &a[i]);
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (a[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            result[k++] = a[i];
    }
    for (int i = 0; i < k; i++)
        pri


Input: 6 | 122344 Output: 1234
Input: 5 | 55555 Output: 5