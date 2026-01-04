3. Write a C program to find the largest of two numbers.    

#include <stdio.h>
int main() {
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   if(a>b){
       printf("%d",a);
   }
   else{
       printf("%d",b);
   }
    return 0;
}

Input: 4 9 Output: 9
Input: 10 2 Output: 10