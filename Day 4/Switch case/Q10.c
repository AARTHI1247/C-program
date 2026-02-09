#include<stdio.h>
int main(){
    int a,bonus,salary;
    scanf("%d\n",&a);
    int ex;
    scanf("%d",&ex);
    switch (a)
    {
        case 1:
            if(ex>=3){
                bonus=ex*5000;
                salary=50000+bonus;
                printf("Rs Salary%d",salary);
        }
            else if(ex<3){
                salary=50000;
                printf("Rs Salary%d",salary);
        }
            break;
    case 2:
            if(ex>=3){
                bonus=5000*ex;
                salary=35000+bonus;
                printf("Rs Salary%d",salary);
       }
            else if(ex<3){
                salary=35000;
                 printf("Rs Salary%d",salary);
        } 
                break;
    default:
        break;
    }
}