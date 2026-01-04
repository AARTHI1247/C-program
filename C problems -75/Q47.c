47. Write a C program to copy one string to another.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   char b[50];
   strcpy(b,a);
   printf("%s",b);
   return 0;
}

Input: "hello" Output: hello
Input: "Cprogram" → Output: Cprogram