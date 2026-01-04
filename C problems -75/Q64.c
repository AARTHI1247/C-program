64. Write a C program to convert a binary number into decimal.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int dec = 0, base = 1;
    while (n > 0) {
        int digit = n % 10;
        dec += digit * base;
        base *= 2;
        n /= 10;
    }
    printf("%d", dec);
    return 0;
}


Input: 1010 Output: 10
Input: 111 Output: 7
