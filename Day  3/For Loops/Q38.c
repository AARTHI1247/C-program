#include<stdio.h>
int main(){
    int n,loss,sum=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&loss);
        sum=sum+loss;    
     if(loss>100){
          c++;  
        }
    }
    printf("total loss:%d\n",sum);
    printf("No of days high loss :%d",c);
} 

   