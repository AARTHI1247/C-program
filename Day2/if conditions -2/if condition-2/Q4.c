#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a<20) {
        printf("Cold");
    }
    else if(a>20 && a<30){
    printf("Normal");
        }
    else if (a>30) {
        printf("Hot");
    }
    return 0;
}