#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prime=0;
    for(int i=2;i<=n;i++){
       int Isprime=1;
        for(int j=2;j<i;j++){
        if(i%j==0){
            Isprime=0;
            break;
        }
        }
        if(Isprime==1){
            prime++;
        }
    }
    printf("%d",prime);
}