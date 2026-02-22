#include<stdio.h>
#include<math.h>
int sum(int n){
    int add=0;
    for(int i=1;i<=n;i++){
        add=add+i;
    }
    return add;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
