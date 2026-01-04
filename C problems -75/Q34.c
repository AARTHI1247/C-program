34. Write a C program to find the minimum element in an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(int i=1;i<n;i++){
       if(a[i]<min){
         min=a[i];
    }
    }
    printf("%d",min);
    return 0;
}


Input: 5 | 29164→Output: 1
Input: 3 | 10 37 Output: 3