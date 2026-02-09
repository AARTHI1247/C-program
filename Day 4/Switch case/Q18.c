#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int m;
    scanf("%d",&m);
    switch (a)
    {
        case 1:
            if(m>=80){
                printf("Excellent");
            }
            else{
                printf("Not Qualified");
            }
                break;
        case 2:
            if(m>=60){
                printf("Good");
            }
            else{
                printf("Not Qualified");
            }
                break;
            case 3:
                printf("Need Improvement");
                break;
        default:
            break;
    }
    return 0;
}