21. Write a C program to print multiplication table of a number.

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   for(int i=1;i<=10;i++){
    int j=n*i;
    printf("%d ",j);
 }
    return 0;
}

Input: 2→ Output: 2 4 6 8 10
Input: 3→ Output: З 6 9 12 15
