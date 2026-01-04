59. Write a C program to find the GCD of two numbers.

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);
    return 0;
}


Input: 12 18 Output: 6
Input: 8 16 Output: 8