#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    switch (a)
    {
    case 1:
         d=b+c;
        printf("sum:%d ",d);
        break;
    case 2:
         d=b-c;
        printf("sub:%d",d);
        break;
    case 3:
        d=b*c;
        printf("mul:%d",d);
        break;
    case 4:
        d=b/c;
        printf("div:%d",d);
        break;
    default:
        break;
    }
}