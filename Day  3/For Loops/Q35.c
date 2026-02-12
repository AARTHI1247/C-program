#include<stdio.h>
int main(){
    int t,n,sum=0;
    scanf("%d",&t);
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    int rem=t-sum;
    printf("%d",rem);
}