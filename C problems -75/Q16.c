16. Write a C program to print numbers from 1 to N.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       printf("%d ",i);
   }
    return 0;
}

Input: 5 Output: 12345
Input: 3 Output: 123
