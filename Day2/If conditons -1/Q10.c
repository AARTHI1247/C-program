#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=100 && a<999){
        printf("3 digit number");
    }
    else {
        printf("not a 3 digit number");
    }
}