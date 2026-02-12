#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("Total cost:%d",sum);
}