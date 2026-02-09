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
                if(t>=18){
                    am=200;
                    printf("%d",am);}
                else{
                    am=150;
                    printf("%d",am);
                }
                break;
        case 2:
            if(t>=18){
                am=300;
                printf("%d",am);
            }
            else{
                am=250;
                printf("%d",am);
            }
                break;
        default:
            break;
    }
    return 0;
}