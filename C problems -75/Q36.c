36. Write a C program to count odd numbers in an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
       if(a[i]%2!=0){
         count=count+1;
    }
    }
    printf("%d",count);
    return 0;
}

Input: 5 | 12346-Output: 2
Input: 3 | 79 11 Output: 3