#include <stdio.h>
int main(){
    int a,n;
    scanf("%d",&a);
    n=a/10;
    switch (n) {
        if (n<30) {
            printf("Fail");
            break;
        }
        case 3:
            printf("Supplementay");
            break;
        case 4:
            printf("F");
            break;
        case 5:
            printf("E");
            break;
        case 6:
            printf("D");
            break;
        case 7:
            printf("C");
            break;
        case 8:
            printf("B");
            break;

        case 9:
            printf("A");
            break;
        }
    return 0;
}
