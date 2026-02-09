#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int t;
    scanf("%d",&t);
    int am;
    switch (a)
    {
        case 1: 
               am=1*t;
                printf("Rs%d",am);
                break;
        case 2:
                am=2*t;
                printf("%d",am);
                break;
        case 3:
                am=10*t;
                printf("%d",am);
                break;
        default:
            break;
    }
    return 0;
}