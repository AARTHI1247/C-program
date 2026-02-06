#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a<20){
        printf(" Heating Mode");
    }
    else if (a>=20 && a<30){
        printf("Normal Mode");
    }
    else if (a>=30) {
        printf("Cooling Mode");
    }
    return 0;
}