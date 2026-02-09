#include<stdio.h>
int main() {
    int a,p;
    scanf("%d\n %d",&a,&p);
    switch (a) {
        case 1:
            printf("Interest 5%");
            break;
        case 2:
            if (p<=3) {
                printf("Interest 3%");
            }
            else if (p>3) {
                printf("Interest 7%");
            }
            break;
    }
    return 0;
}