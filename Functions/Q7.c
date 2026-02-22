#include<stdio.h>
#include<math.h>
int isprime(int n){
    if(n<=1){
        printf("Not Prime");
    }
    int prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
        }
    }
    if(prime==0){
        printf("not prime");
    }
    else if(prime==1){
        printf("Prime");
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    isprime(a);
    return 0;
}
