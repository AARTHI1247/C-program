43. Write a C program to sort array in descending order.
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
   for(int i=0;i<n;i++){
       printf("%d ", a[i]);
       }
    return 0;
}


Input: 5 | 53142 Output: 54321
Input: 3 | 978 Output: 987