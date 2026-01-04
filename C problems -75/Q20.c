20. Write a C program to find the factorial of a number.

#include <stdio.h>
int main() {
   int n,fact=1;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      fact=fact*(n-i);   
   }
   printf("%d",fact);
   return 0;
}

Input: 5 Output: 120
Input: 4Output: 24