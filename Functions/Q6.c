#include<stdio.h>
#include<math.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a;
    scanf("%d",&a);
    int ans=factorial(a);
    printf("%d",ans);
    return 0;
}
