#include <stdio.h>

int main(){
    float a;
    scanf("%f",&a);
    if (a>2.5){
        printf("Data limit exceeded");
    }
    else if(a<2.5){
    printf("Data limit not exceeded");
        }
    return 0;
}