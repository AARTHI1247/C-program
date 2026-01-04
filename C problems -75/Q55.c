#include <stdio.h>
55. Write a C program to count spaces in a string.

#include <string.h>
#include <ctype.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   int len=strlen(a);
   int count=0;
   for(int i=0;i<len;i++){
     if(a[i]==' '){
        count++;
     }
   }
   printf("%d",count);
   return 0;
}

Input: "hello world" → Output: 1