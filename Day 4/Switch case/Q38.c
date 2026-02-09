#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=500;
                printf("%d",am);
                break;
        case 2:
                am=1200;
                printf("%d",am);
                break;
        default:
            break;
    }
    return 0;
}