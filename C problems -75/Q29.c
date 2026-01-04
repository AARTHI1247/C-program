29. Write a C program to print star pattern for N rows.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
          printf("*");
      }
      printf("\n");
 }
    return 0;
}

Input: 3→ Output:
*
**
***
Input: 2→ Output:
*
**