18. Write a C program to print even numbers up to N.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(i%2==0){
          printf("%d ",i);
   }
   }
    return 0;
}

Input: 6 Output: 246
Input: 10 Output: 2 4 6 8 10