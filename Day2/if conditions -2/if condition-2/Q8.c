#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>=1 && a<5){
        printf("Weekdays");
    }
    else(a==6 || a==7){
    printf("Weekends");
        }
    return 0;
}