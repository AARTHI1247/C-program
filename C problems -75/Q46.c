46. Write a C program to find the length of a string.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   printf("%d",strlen(a));
   return 0;
}

Input: "hello" → Output: 5
Input: "programming" Output: 11