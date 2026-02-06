#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>=5){
        printf("Valid Email");
    }
    else if (a<5) {
        printf(" Invalid Email");
    }
    return 0;
}