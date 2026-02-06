#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<10 || a>100){
        printf("Yes");
    }
    else{
        printf("no");
    }
    return 0;
}