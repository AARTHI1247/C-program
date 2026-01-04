68. Write a C program to find the frequency of each element in an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n], freq[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] != -1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                freq[j] = 0;
            }
        }
        freq[i] = count;
    }
    for (int i = 0; i < n; i++) {
        if (freq[i] > 0) {
            printf("%d-%d", a[i], freq[i]);
            if (i < n - 1)
                printf(", ");
        }
    }
    return 0;
}


Input: 5 | 12231 Output: 1-2, 22,3-1
Input: 3 | 444 Output: 43