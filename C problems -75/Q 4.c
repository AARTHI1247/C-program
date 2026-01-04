4. Write a C program to find the largest of three numbers.

#include <stdio.h>
int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   if(a>b && a>c){
       printf("%d",a);
   }
   else if(b>c){
       printf("%d",b);
   }
   else{
       printf("%d",c);
   }
    return 0;
}

Input: 2 53 Output: 5
Input: 7 1 4 → Output: 7
