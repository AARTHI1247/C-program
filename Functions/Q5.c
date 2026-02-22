#include<stdio.h>
#include<math.h>
int sum(int n){
    int add=0;
    while(n>0){
        int dg=n%10;
        add=add+dg;
        n=n/10;
    }
    return add;
}
int main(){
    int a;
    scanf("%d",&a);
    int ans=sum(a);
    printf("%d",ans);
    return 0;
}
