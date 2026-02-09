#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int score;
    scanf("%d",&score);
    switch (a)
    {
        case 1:
            if(score>=700){
                printf("Approved");
        }
            else if(score>=650 && score<699){
                printf("Manual Review");
        }
            break;
        case 2:
        if(score>=700){
            printf("Approved");
    }
        else if(score<700){
            printf("Rejected");
    }
        break;
    default:
        break;
    }
    return 0;
}