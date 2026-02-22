#include<stdio.h>
#include<math.h>
int reverse(int n){
    int rev=0;
    if(n<0){
        n=n*(-1);
    }
    while(n>0){
        int dg=n%10;
        rev=rev*10+dg;
        n=n/10;
    }
    return rev;
}
int main(){
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("%d",(-1)*reverse(a));
    }
    else{
    printf("%d",reverse(a));
}
    return 0;
}
