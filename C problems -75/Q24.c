24. Write a C program to find the sum of digits of a number.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int digit=0;
   while(n>0){
      digit=digit+(n%10);
      n=n/10;
   }
   printf("%d",digit);
   return 0;
}

Input: 123 → Output: 6
Input: 456 Output: 15
