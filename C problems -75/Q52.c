52. Write a C program to check whether a string is palindrome.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   int len=strlen(a);
   char o[50];
   strcpy(o,a);
   char swap;
   for(int i=0;i<len/2;i++){
      swap=a[i];
      a[i]=a[len-i-1];
      a[len-i-1]=swap;
   }
   if(strcmp(o,a)==0){
       printf("Palindrome");
   }
   else{
       printf("Not a Palindrome");
   }
   return 0;
}

Input: "madam" → Output: Palindrome
Input: "hello" → Output: Not Palindrome