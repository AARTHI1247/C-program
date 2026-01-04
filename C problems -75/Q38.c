38. Write a C program to reverse an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b;
    for(int i=0;i<=n%2;i++){
        b=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=b;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

Input: 4 | 1234Output: 4 321
Input: 3| 987Output: 789