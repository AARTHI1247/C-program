57. Write a C program to check whether a number is a Strong number.

#include <stdio.h>
#include <math.h>
int main() {
   int n,temp;
   scanf("%d",&n);
   temp=n;
   int digit=0;
   n=temp;
   int sum=0;
   while(n>0){
       int digit=n%10;
       int fact=1;
       for(int i=1;i<=digit;i++){
           fact=fact*i;
       }
       sum=sum+fact;
       n=n/10;
   }
   if(sum==temp){
       printf("Strong");
   }
   else{
       printf(" Not Strong");
   }
    return 0;
}

Input: 145 Output: Strong
Input: 123 Output: Not Strong

