#include <stdio.h>
33. Write a C program to find the maximum element in an array.

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1;i<n;i++){
       if(a[i]>max){
         max=a[i];
    }
    }
    printf("%d",max);
    return 0;
}

Input: 5| 29164 Output: 9
Input: 3 | 10 37 Output: 10
