#include<stdio.h>
int main(){
    int n,s,sum=0,c=0;
    scanf("%d",&n);
    int max;
    for(int i=1;i<=n;i++){
        scanf("%d",&s); 
        sum=sum+s;
        if(s>50000){
            c++;
        }
    }
    printf("total revenue:%d\n",sum);
    printf("No of target achieved :%d",c);
} 

   