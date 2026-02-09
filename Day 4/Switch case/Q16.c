#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int kg;
    scanf("%d",&kg);
    int am,f2;
    switch (a)
    {
        case 1:
                am=300*kg;
                printf("Extra Bag Charge %d",am);
            break;
        case 2:
           f2=kg-3;
           if(f2==0){
                printf("Free");
           }
           else if(f2>3){
                am=f2*300;
                printf("Extra Baggage Charge%d",am);
           }
        break;
    default:
        break;
    }
    return 0;
}