#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if (a>=80){
        printf("Speed limit exceeds");
    }
    else if (a<80) {
        printf("within speed limits");
    }
    return 0;
}