#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    char s;
    scanf("%c",&s);
    switch (a)
    {
    case 1:
        if(s=='A'){
            printf("Rs 2500");
        }
        else if(s=='B'){
            printf("Rs 2000");
        }
        break;
    case 2:
        if(s=='C'){
            printf("Rs 4000");
        }
        else if(s=='D'){
            printf("Rs 3000");
        }
        break;
    default:
        break;
    }
}