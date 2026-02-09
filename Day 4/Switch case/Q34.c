#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=40;
                printf("%dMbps",am);
                break;
        case 2:
                am=100;
                printf("%dMbps",am);
                break;
        case 3:
                am=300;
                printf("%dMbps",am);
                break;
        default:
            break;
    }
    return 0;
}