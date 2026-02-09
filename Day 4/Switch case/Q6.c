#include<stdio.h>
int main() {
    int a,p;
    scanf("%d\n %d",&a,&p);
    switch (p) {
        case 1:
                printf("Delivery Rs 50");
                break;
        case 2:
            if (a<1000) {
                printf("Delivery Rs 100");
            }
            else if (a>=1000) {
                printf("Free Delivery");
            }
            break;
    }
    return 0;
}