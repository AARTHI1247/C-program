#include<stdio.h>
int main() {
    int m,a;
    scanf("%d\n %d",&m,&a);
    if (a<75) {
        printf("Fail");
    }
    else if (a>=75) {
        if (m>=75) {
            printf("Distinction");
        }
        else if (m>50 && m<74) {
            printf("Pass");
        }
        else if (m<50) {
            printf("Fail");
        }
    }
    return 0;
}