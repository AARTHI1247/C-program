#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a<12){
        printf("Discount Ticket");
    }
    else{
        printf("regular ticket");
    }
    return 0;
}