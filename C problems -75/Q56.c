56. Write a C program to check whether a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
   int n,temp;
   scanf("%d",&n);
   temp=n;
   int count=0;
   int digit=0;
   while( n>0){
       n=n/10;
       count++;
   }
   n=temp;
   int sum=0;
   while(n>0){
       digit=n%10;
       sum=sum+pow (digit,count);
       n=n/10;
   }
   if(sum==temp){
       printf("Armstrong");
   }
   else{
       printf(" Not Armstrong");
   }
    return 0;
}

Input: 153 → Output: Armstrong
Input: 123 Output: Not Armstrong