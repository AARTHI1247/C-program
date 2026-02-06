#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>8) {
        printf("Strong password");
    }
    else if(a<8){
    printf("weak password");
        }
    return 0;
}