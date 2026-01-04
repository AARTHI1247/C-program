8. Write a C program to check whether a number is divisible by 11.

#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n%11==0){
       printf("Divisible");
   }
   else {
       printf("Not Divisible");
   }
    return 0;
}#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n%11==0){
       printf("Divisible");
   }
   else {
       printf("Not Divisible");
   }
    return 0;
}

Input: 121 Output: Yes
Input: 13 Output: No