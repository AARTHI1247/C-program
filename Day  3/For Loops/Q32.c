#include<stdio.h>
int main(){
    int n,exp,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&exp);
        sum=sum+exp;    
    }
     if(sum>10000){
          printf("Limit Exceeded");  
        }
    else{
        printf("Approved");
} 
}
   