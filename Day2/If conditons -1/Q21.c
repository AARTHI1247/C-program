#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch (b)
    {
    case 1:
        int d=a+c;
        printf("%d",d);
        break;
    case 2:
        int d=a-c;
        printf("%d",d);
        break;
    case 3:
        int d=a*c;
        printf("%d",d);
        break;
    case 4:
        int d=a/c;
        printf("%d",d);
        break;
    default:
        break;
    }
}