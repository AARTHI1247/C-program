12. Write a C program to check whether a number is a single digit number.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   if(n>=0 && n<=9){
       printf("Single digit");
   }
   else {
       printf("Double digit");
   }
    return 0;
}

Input: 7→ Output: Single Digit
Input: 15 Output: Not Single Digit