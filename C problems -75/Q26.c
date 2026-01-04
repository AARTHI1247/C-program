26. Write a C program to print Fibonacci series up to N terms.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int a=0,b=1,c;
   for(int i=0;i<n;i++){
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
   }
   return 0;
}

Input: 5 Output: 0 1123
Input: 7 Output: 0112358