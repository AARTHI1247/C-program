#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int am;
    switch (a)
    {
        case 1: 
                am=2*b;
                printf("Rs%d",am);
                break;
        case 2:
                am=5*b;
                printf("Rs%d",am);
                break;
        default:
            break;
    }
    return 0;
}