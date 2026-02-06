#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("Waiting list");
    }
    else if (a>0) {
        printf("Confirmed");
    }
    return 0;
}