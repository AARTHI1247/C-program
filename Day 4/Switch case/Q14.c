#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int age;
    scanf("%d",&age);
    int am;
    switch (a)
    {
        case 1:
            if(age<=5){
                am=1500;
                printf("Rs%d",am);
        }
            else if(age>5){
                am=2500;
                printf("Rs%d",am);
        }
            break;
        case 2:
        if(age<=5){
            am=4000;
            printf("Rs%d",am);
    }
        else if(age>5){
            am=6000;
            printf("Rs%d",am);
    }
        break;
    default:
        break;
    }
    return 0;
}