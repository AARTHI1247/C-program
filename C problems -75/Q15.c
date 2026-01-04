15. Write a C program to check whether a character is an alphabet.

#include <stdio.h>
int main() {
   char n;
   scanf("%c",&n);
   if(n>='A' && n<='Z'){
       printf("Alphabet");
   }
   else if(n>='a' && n<='z'){
       printf("Alphabet"); 
   }
   else {
       printf("Not Alphabet");
   }
    return 0;
}

Input: a → Output: Alphabet
Input: 1 Output: Not Alphabet

