#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int am;
    if(a<=5){
        am=50*a;
        printf("%d",am);
    }
    else if(a>5 && a<=10){
        am=100*a;
        printf("%d",am);
    }
    else if(a>10){
        am=200*a;
        printf("%d",am);
    }
       return 0;
}