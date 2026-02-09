#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=80000;
                printf("Rs%d",am);
                break;
        case 2:
                am=60000;
                printf("Rs%d",am);
                break;
        case 3:
                am=45000;
                printf("Rs%d",am);
                break;
        default:
            break;
    }
    return 0;
}