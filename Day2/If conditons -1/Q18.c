#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>100){
        int p=a-100;
        int b=p*30;
        printf(" Bill amount:Rs.%d",b);
    }
    else if (a<=100){
        printf("not need to pay");
    }
}