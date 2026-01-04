25. Write a C program to check whether a number is a palindrome.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int temp=n;
   int digit,rev=0;
   while(n>0){
      digit=n%10;
      rev=rev*10+digit;
      n=n/10;
   }
   if(temp==rev){
      printf("Palindrome");
   }
   else{
       printf("Not a Palindrome");
   }
   return 0;
}

Input: 121 Output: Palindrome
Input: 123 Output: Not Palindrome