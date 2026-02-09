#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int hr;
    scanf("%d",&hr);
    int am;
    switch (a)
    {
        case 1:
                am=10*hr;
                printf("Parking Fee %d",am);
            break;
        case 2:
                am=20*hr;
                printf("Parking Fee %d",am);
        break;
    default:
        break;
    }
    return 0;
}