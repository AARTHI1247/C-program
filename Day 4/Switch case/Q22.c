#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int t;
    scanf("%d",&t);
    int am,u,b;
    switch (a)
    {
        case 1:
                if(t<30){
                    am=5*t;
                    printf("%d",am);}
                else if(t>30){
                    u=t-30;
                    b=30*5;
                    am=(8*u)+b;
                    printf("%d",am);
                }
                break;
        case 2:
                am=10*t;
                printf("%d",am);
                break;
        default:
            break;
    }
    return 0;
}