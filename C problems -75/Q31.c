31. Write a C program to read and print array elements.

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

Input: 5 | 12345→ Output: 12345
Input: 3 | 987 Output: 98 7