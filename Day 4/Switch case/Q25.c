#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                am=1200;
                printf("Rs%d",am);
                break;
        case 2:
                am=800;
                printf("Rs%d",am);
                break;
        case 3:
                am=500;
                printf("Rs%d",am);
                break;
        default:
            break;
    }
    return 0;
}