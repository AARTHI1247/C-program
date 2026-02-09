#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int t;
    scanf("%d",&t);
    switch (a)
    {
        case 1:
                printf("Full access anytime");
                break;
        case 2:
            if(t>9 && t<=20){
                printf("Limited Access");
            }
            else{
                printf("Access Denied");
            }
                break;
        default:
            break;
    }
    return 0;
}