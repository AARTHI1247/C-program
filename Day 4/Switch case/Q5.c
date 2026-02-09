#include<stdio.h>
int main() {
    int a,p;
    scanf("%d\n %d",&a,&p);
    switch (a) {
        case 1:
            if (p==11 || p==12) {
                printf("Pay Rs 179");
            }
            else if (p==13) {
                printf("No cashback");
            }
            break;
        case 2:
            if (p==11 || p==12) {
                printf("Pay Rs 379");
            }
            else if (p==13) {
                printf("No cashback");
            }
            break;
    }
    return 0;
}