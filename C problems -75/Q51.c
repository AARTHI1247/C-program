51. Write a C program to count consonants in a string.

#include <stdio.h>
#include <string.h>
int main() {
   char a[50];
   fgets(a,50,stdin);
   a[strcspn(a,"\n")]='\0';
   int len=strlen(a);
   int count_v=0;
   int count_c=0;
   for(int i=0;i<len;i++){
      if(a[i]=='a'||a[i]=='e'||a[i]=='i' ||a[i]=='o' ||a[i]=='u'){
         count_v=count_v+1;
      }
      else{
          count_c=count_c+1;
      }
   }
   printf("%d",count_c);
   return 0;
}

Input: "hello" → Output: 3
Input: "abc" → Output: 2
