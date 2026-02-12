#include<stdio.h>
int main(){
    int n,exp,sum=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&exp);
        sum=sum+exp;    
     if(exp>50){
          c++;  
        }
    }
    printf("total mm:%d\n",sum);
    printf("No of days exceeded:%d",c);
} 

   