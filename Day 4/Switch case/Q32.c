#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=1000;
                printf("Rs%d",am);
                break;
        case 2:
                am=1500;
                printf("Rs%d",am);
                break;
        case 3:
                am=2000;
                printf("Rs%d",am);
                break;
        default:
            break;
    }
    return 0;
}