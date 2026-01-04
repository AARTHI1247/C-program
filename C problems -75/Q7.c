7. Write a C program to check whether a number is divisible by 5.

#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n%5==0){
       printf("Divisible");
   }
   else {
       printf("Not Divisible");
   }
    return 0;
}

Input: 25→ Output: Divisible
Input: 14 Output: Not Divisible