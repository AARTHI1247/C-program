2. Write a C program to check if a number is positive, negative, or zero.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   if(n>0){
       printf("Positive");
   }
   else if(n<0){
       printf("Negative");
   }
   else if(n==0){
       printf("Zero");
   }
    return 0;
}

Input: 5→ Output: Positive
Input: -3Output: Negative
