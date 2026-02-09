#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int d;
    scanf("%d",&d);
    switch (a)
    {
        case 1:
            if(d<=30){
                printf("Eligile");
            }
            else if(d>30){
                printf("Eligible wit Extra fee");
            }
                break;
        case 2:
            if(d<=30){
                printf("Eligible");
            }
            else{
                printf("Not Eligible");
            }
                break;
        default:
            break;
    }
    return 0;
}