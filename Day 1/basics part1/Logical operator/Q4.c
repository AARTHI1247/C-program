#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    int c=((a>0 && b>0) || (a==0 || b==0));
    printf("%d",c);
}
