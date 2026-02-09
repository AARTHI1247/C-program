#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    char s;
    scanf("%c",&s);
    int am;
    switch (a)
    {
        case 1:
            if(s=='R'){
                am=5000;
                printf("Rs%d",am);
        }
            else if(s=='S'){
                am=3000;
                printf("Rs%d",am);
        }
            break;
        case 2:
        if(s=='R'){
            am=9000;
            printf("Rs%d",am);
    }
        else if(s=='S'){
            am=7000;
            printf("Rs%d",am);
    }
        break;
    default:
        break;
    }
    return 0;
}