14. Write a C program to check whether a number is divisible by 2 or 3.

#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n%2==0 || n%3==0){
       printf("Yes");
   }
   else {
       printf("No");
   }
    return 0;
}

Input: 6→ Output: Yes
Input: 7→ Output: No