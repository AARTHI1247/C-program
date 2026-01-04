11. Write a C program to check whether a number is a multiple of both 3 and 5.

#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n%3==0 && n%5==0){
       printf("Yes");
   }
   else {
       printf("No");
   }
    return 0;
}

Input: 15 Output: Yes
Input: 9 Output: No