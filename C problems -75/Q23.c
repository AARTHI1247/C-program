23. Write a C program to reverse a number.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int digit;
   while(n>0){
      digit=n%10;
      printf("%d",digit);
      n=n/10;
   }
   return 0;
}

Input: 123 Output: 321
Input: 456 Output: 654