13. Write a C program to check whether a person is eligible to vote.

#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n>=18){
       printf("Eligible");
   }
   else {
       printf("Not Eligible");
   }
    return 0;
}

Input: 18Output: Eligible
Input: 16 Output: Not Eligible