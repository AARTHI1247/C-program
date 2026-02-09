#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    float used;
    scanf("%f",&used);
    switch (a)
    {
        case 1:
            if(used<=1){
                printf("Normal Speed");
        }
            else if(used>1){
                printf("Speed Reduced");
        }
            break;
        case 2:
            if(used<=2){
                printf("Normal Speed");
        }
            else if(used>2){
                printf("Extra Charges Applied");
        }
            break;
    default:
        break;
    }
    return 0;
}