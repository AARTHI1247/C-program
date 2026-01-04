53. Write a C program to convert a string to uppercase.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   int len=strlen(a);
   for(int i=0;i<len;i++){
      a[i]=toupper(a[i]);
   }
   printf("%s",a);
   return 0;
}

Input: "hello" → Output: HELLO
Input: "Cprogram" →Output: CPROGRAM