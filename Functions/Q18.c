#include<stdio.h>
#include<math.h>
void gcd(int a,int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else if(b>a){
            b=b-a;
        }
    }
    printf("%d",a);
    }
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    gcd(a,b);
    return 0;
}
