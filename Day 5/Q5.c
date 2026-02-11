#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sume=n*(n+1)/2,sum;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        }
    int num=sume-sum;
    printf("%d",num);
    return 0;
}
