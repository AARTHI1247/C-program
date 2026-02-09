#include <stdio.h>
int main(){
    int a,bal,hun,p,bill;
    scanf("%d\n",&a);
    int b;
    scanf("%d",&b);
    switch (a) {
        case 1:
            bal=b-100;
            hun=100*3;
            p=bal*5;
            bill=(hun+p)-80;
            printf("Bill Rs:%d",bill);
            break;
        case 2:
            bal=b-100;
            hun=100*7;
            p=bal*10;
            bill=hun+p;
            printf("Bill Rs:%d",bill);
            break;
        }
    return 0;
}
