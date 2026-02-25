#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    int *temp;
    temp=p1;
    p1=p2;
    p2=temp;
    printf("Before swap: %d %d After swap:%d %d",a,b,*p1,*p2);
}
