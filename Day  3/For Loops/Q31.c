#include<stdio.h>
int main(){
    int n,exp,sum=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&exp);
        if(exp>=1000){
            c++;
        }
        sum=sum+exp;
    }
    printf("Sum Expenses:%d\n",sum);
    printf("over spended days:%d",c);
}