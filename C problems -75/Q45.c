45. Write a C program to find average of array elements.

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
    int avg=sum/n;
    printf("%d ",avg);
    return 0;
}

Input: 4 | 2468Output: 5
Input: 3 | 10 20 30 Output: 20