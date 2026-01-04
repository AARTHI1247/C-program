39. Write a C program to copy one array to another.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++){
          b[i]=a[i];
    }
   for(int i=0;i<n;i++){
       printf("%d ", b[i]);
       }
    return 0;
}

Input: 3 | 123 Output: 1 2 3
Input: 4 | 5678-Output: 5 678
