60. Write a C program to find the LCM of two numbers.

#include <stdio.h>
int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int lcm = (x * y) / a;
    printf("%d", lcm);
    return 0;
}


Input: 4 6 → Output: 12
Input: 5 10 Output: 10