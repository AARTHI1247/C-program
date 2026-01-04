17. Write a C program to find the sum of first N natural numbers.

#include <stdio.h>
int main() {
   int n,sum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       sum=sum+i;
   }
   printf("%d",sum);
    return 0;
}

Input: 5 Output: 15
Input: 10 Output: 55
