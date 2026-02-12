#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int pow;
    for(int i=1;i<=b;i++){
       pow=a*i;
    }
    printf("%d",pow);
}