5. Write a C program to check whether a year is a leap year.  

#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   if(n%400==0){
       printf("Leap Year");
   }
   else if(n%100==0){
       printf("Not Leap Year");
   }
   else if(n%4==0){
       printf("Leap Year");
   }
   else {
       printf("Not Leap Year");
   }
    return 0;
}

Input: 2024 Output: Leap Year
Input: 2023 → Output: Not Leap Year

