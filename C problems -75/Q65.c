65. Write a C program to convert a decimal number into binary.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int bin[32], i = 0;
    if (n == 0) {
        printf("0");
        return 0;
    }
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
    return 0;
}


Input: 10 Output: 1010
Input: 7 Output: 111