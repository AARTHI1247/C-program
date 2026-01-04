58. Write a C program to check whether a number is a Perfect number.

#include <stdio.h>
#include <math.h>
int main() {
   int n,sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n/2;i++){
           sum=sum+i;
       }
   if(sum==n){
       printf("Perfect");
   }
   else{
       printf(" Not Perfect");
   }
    return 0;
}


Input: 6 Output: Perfect
Input: 10 Output: Not Perfect