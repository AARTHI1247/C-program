#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    switch (a)
    {
        case 1: 
                if(a<1){
                    printf("Uner Warrenty");
                }
                break;
        case 2:
                 if(a<=2){
                    printf("Limited Warrenty");
                }
                break;
        case 3:
                if(a>2){
                   printf("Out of Warrenty");
               }
               break;
        default:
            break;
    }
    return 0;
}