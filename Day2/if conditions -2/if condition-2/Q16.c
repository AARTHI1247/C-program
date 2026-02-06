#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>90){
        printf("Overflow Warning");
    }
    else if (a<90){
        printf("Safe level");
    }
    return 0;
}