#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=a*105;
                printf("%dMbps",am);
                break;
        case 2:
                am=a*92;
                printf("%dMbps",am);
                break;
        case 3:
                am=a*85;
                printf("%dMbps",am);
                break;
        default:
            break;
    }
    return 0;
}