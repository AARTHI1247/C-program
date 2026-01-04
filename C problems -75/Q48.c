48. Write a C program to compare two strings.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   char b[50];
   fgets(b,50,stdin);
   if(strcmp(b,a)==0){
      printf("Equal");
   }
   else {
       printf("Not Equal");
   }
   return 0;
}

Input: "abc" "abc" → Output: Equal
Input: "abc" "abd" → Output: Not Equal
