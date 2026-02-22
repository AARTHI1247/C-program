#include<stdio.h>
#include<math.h>
int power(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
         p=p*a;
    }
    return p;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",power(a,b));
    return 0;
}
