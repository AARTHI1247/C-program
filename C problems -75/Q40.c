#include <stdio.h>
40. Write a C program to count positive numbers in an array.

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
       if(a[i]>0){
          count=count+1;
       }
    }
    printf("%d ",count);
    return 0;
}

Input: 5| -12-345 Output: 3
Input: 3 | -5-6-7 Output: 0