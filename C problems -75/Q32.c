32. Write a C program to find sum of array elements.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
       sum=sum+a[i]; 
    }
    printf("%d",sum);
    return 0;
}

Input: 4 | 1234 Output: 10
Input: 3 | 555 Output: 15
