#include<stdio.h>
#include<math.h>
void armstrong(int n){
    int temp=n;
    int c=0,p=0;
    while(n>0){
        n=n/10;
        c++;
    }
    while(n>0){
        int dg=n%10;
        int p=p+pow(dg,c);
        n=n/10;
    }
    if(p==temp){
        printf("Armstrong number");
    }
    else{
        printf("Not Armstrong number");
    }
    }
int main(){
    int n;
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
