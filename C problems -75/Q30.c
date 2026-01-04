30. Write a C program to print numbers from N to 1

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=n;i>0;i--){
          printf("%d ",i);
      }
    return 0;
}

Input: 5→ Output: 5 4321
Input: 3 Output: 321