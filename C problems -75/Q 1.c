1. Write a C program to check whether a number is even or odd.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   if(n%2==0){
       printf("Even");
   }
   else{
       printf("Odd");
   }
    return 0;
}

Input: 4→ Output: Even
Input: 7→ Output: Odd