#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>3){
        printf("Account Locked");
    }
    else if (a>0 && a<=3){
    printf("Login Allowed");
        }
    return 0;
}