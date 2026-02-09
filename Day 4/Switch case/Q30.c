#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    if(a<=1){
        printf("Short Interruption");
    }
    else if(a<=4){
        printf("Medium Interuption");
    }
    else if(a>4){
        printf("Long Interruption");
    }
    return 0;
}