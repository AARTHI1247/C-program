44. Write a C program to find the second largest element in an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    int largest,second_largest;
    if(a[0]>a[1]){
       largest=a[0];
       second_largest=a[1];
    }
    else if(a[0]<a[1]){
        largest=a[1];
        second_largest=a[0];
    }
    for(int i=2;i<n;i++){
        if(a[i]>largest){
          second_largest=largest;
          largest=a[i];
        } 
        else if(a[i]<largest && a[i]>second_largest){
             second_largest=a[i];
            }
    }
    printf("%d ",second_largest);
    return 0;
}

Input: 5 | 10 20 30 40 50 Output: 40
Input: 4 |7598 Output: 8