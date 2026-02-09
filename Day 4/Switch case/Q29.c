#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=10*a;
                printf("Rs%d",am);
                break;
        case 2:
                am=15*a;
                printf("Rs%d",am);
                break;
        case 3:
                am=20*a;
                printf("Rs%d",am);
                break;
        default:
            break;
    }
    return 0;
}