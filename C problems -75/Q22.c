22. Write a C program to count digits in a number.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int count=0;
   while(n>0){
      n=n/10;
      count++;
   }
   printf("%d",count);
   return 0;
}

Input: 1234 → Output: 4
Input: 90 Output: 2