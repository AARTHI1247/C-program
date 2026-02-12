#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int digit,c=0;
    while(n>0){
        digit=n%10;
        c++;
        n=n/10;
    }
    printf("%d",c);
}