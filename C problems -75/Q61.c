61. Write a C program to find the power of a number using loop.

#include <stdio.h>
#include <math.h>
int main() {
   int a,b,power=1;
   scanf("%d",&a);
   scanf("%d",&b);
   for(int i=1;i<=b;i++){
       power=power*a;
       }
   printf("%d",power);
    return 0;
}


Input: 2 3 Output: 8
Input: 5 2 Output: 25