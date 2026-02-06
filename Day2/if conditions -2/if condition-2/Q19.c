#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>0 && a<50){
        printf("Fail");
    }
    else if (a>=50 && a<85){
        printf("Pass");
    }
    else if (a>=85) {
        printf("Distinction");
    }
    return 0;
}