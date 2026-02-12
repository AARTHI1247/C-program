#include<stdio.h>
int main(){
    int n,con,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&con);
        sum=sum+con;    
    }
        printf("Total units:%d",sum);
}
   