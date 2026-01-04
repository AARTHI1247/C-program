19. Write a C program to print odd numbers up to N.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(i%2!=0){
          printf("%d ",i);
   }
   }
    return 0;
}

Input: 7 Output: 1 3 5 7
Input: 5 Output: 1 3 5