37. Write a C program to search an element in an array.

#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    int found=0;
     for(int i=0;i<n;i++){
       if(b==a[i]){
         found=1;
       }
     }
    if(found==1){
        printf("Found");
    }
    else{
        printf("Not Found");  
}
    return 0;
}

Input: 5 | 12345|3 Output: Found
Input: 3 | 864|5-Output: Not Found