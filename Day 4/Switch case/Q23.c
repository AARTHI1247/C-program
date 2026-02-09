#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int t;
    scanf("%d",&t);
    int am,d,da;
    switch (a)
    {
        case 1: 
                da=(t*5)/100;
                am=t-da;
                printf("%d",am);
                break;
        case 2:
                da=(t*15)/100;
                am=t-da;
                printf("%d",am);
                break;
        default:
            break;
    }
    return 0;
}