49. Write a C program to reverse a string.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   int len=strlen(a);
   int swap;
   for(int i=0;i<len/2;i++){
       swap=a[i];
       a[i]=a[len-i-1];
       a[len-i-1]=swap;
   }
   printf("%s",a);
   return 0;
}

Input: "hello" → Output: olleh
Input: "abc" Output: cba