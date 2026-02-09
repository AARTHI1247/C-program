#include<stdio.h>
int main() {
    int a,age,dis,d;
    scanf("%d\n %d",&a,&age);
    switch (a) {
        case 1:
            if (age>=60) {
                //d=33/100;
                dis=(300*33)/100;
                int bill=300-dis;
                printf("%d",bill);
            }
            else if (a<12) {
                dis=(300*50)/100;
                int bill=300-dis;
                printf("%d",bill);
            }else {
                printf("Rs 300");
            }
            break;
        case 2:
            if (age<12) {
                dis=(1000*50)/100;
                int bill=1000-dis;
                printf("%d",bill);
            }
            else {
                printf("Rs 1000");
            }
            break;
       }

    return 0;
}