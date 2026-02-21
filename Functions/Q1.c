#include<stdio.h>
int interest(){
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T);
    int s=(P*R*T)/100;
    return s;
    }
int main(){
    float result=interest();
    printf("%.2f",result);
    return 0;
}
