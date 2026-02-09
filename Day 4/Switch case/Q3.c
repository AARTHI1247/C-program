#include <stdio.h>
int main(){
    int a,b,am;
    scanf("%d\n %d\n %d",&a,&b,&am);
    switch (a) {
        case 1:
            if (b>=am) {
                printf("Transaction Successfull");
            }
            break;
        case 2:
            if (am>5000) {
                printf("Limit Exceeded");
            }
            break;
    }
    return 0;
}
