63. Write a C program to print all prime numbers in a given range.

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int n = a; n <= b; n++) {
        if (n < 2) continue;
        int prime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d", n);
            if (n < b) printf(" ");
        }
    }
    return 0;
}


Input: 10 20→ Output: 11 13 17 19
Input: 5 15 Output: 5 7 11 13