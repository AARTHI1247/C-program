6.Write a C program to check whether a character is a vowel.

#include <stdio.h>
int main() {
   char n;
   scanf("%d",&n);
   if(n=='a' || n=='e' || n=='o'|| n=='i'  ||n=='u'){
       printf("Vowel");
   }
   else {
       printf("Not Vowel");
   }
    return 0;
}

Input: a Output: Vowel
Input: b Output: Not Vowel

