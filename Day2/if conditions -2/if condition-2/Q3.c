#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>10000) {
        printf("Discount applied");
    }
    else if(a<3000){
    printf(""
           "Discount not applied");
        }
    return 0;
}