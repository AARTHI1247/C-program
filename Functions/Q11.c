#include<stdio.h>
#include<math.h>
int count(int n){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",count(a));
    return 0;
}
