10. Write a C program to find grade based on marks.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   if(n>=85 && n<=100){
       printf("Grade A");
   }
   else if(n>=60 && n<=84){
       printf("Grade B");
   }
   else if(n>=45 && n<=59){
       printf("Grade C");
   }
   else if(n>=0 && n<=44){
       printf("Fail");
   }
   else {
       printf("Please enter valid reason");
   }
    return 0;
}

Input: 85→ Output: Grade A
Input: 45 Output: Grade C