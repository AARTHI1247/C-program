#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int trip;
    scanf("%d",&trip);
    int amount;
    switch (a)
    {
        case 1:
            if(trip==1){
                amount=100;
                printf("%d",amount);
        }
            else if(trip>=2 && trip<10){
                amount=800;
                printf("%d",amount);
        }
        else if(trip>10){
            amount=800;
            printf("%d",amount);
        }
            break;
        case 2:
            amount=240*trip;
            printf("%d",amount);
            break;
    default:
        break;
    }
    return 0;
}