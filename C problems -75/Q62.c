62. Write a C program to find the sum of all prime numbers up to N.

#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int num=2;num<=n;num++){
        int prime=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
        if(prime)
            sum+=num;
    }
    printf("%d",sum);
    return 0;
}


Input: 10 Output: 17
Input: 20 Output: 77