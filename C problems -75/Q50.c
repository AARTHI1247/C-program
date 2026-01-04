50. Write a C program to count vowels in a string.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   int len=strlen(a);
   int count=0;
   for(int i=0;i<len;i++){
      if(a[i]=='a'||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u'){
         count=count+1;
      }
   }
   printf("%d",count);
   return 0;
}

Input: "hello" → Output: 2
Input: "education" → Output: 5
