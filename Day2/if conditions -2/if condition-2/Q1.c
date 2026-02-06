#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>30000) {
        printf("Eligible");
    }
    else if(a<3000){
    printf("not eligible");
        }
    return 0;
}