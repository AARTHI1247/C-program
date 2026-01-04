9. Write a C program to check whether a character is uppercase or lowercase.

#include <stdio.h>
int main() {
   char n;
   scanf("%c",&n);
   if(n>='A' && n<='Z'){
       printf("Uppercase");
   }
   else if(n>='a' && n<='z'){
       printf("Lowercase");
   }
    return 0;
}

Input: A→ Output: Uppercase
Input: g→ Output: Lowercase
