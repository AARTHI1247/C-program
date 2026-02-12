#include<stdio.h>
int main(){
    int n,s,sum=0,c=0;
    scanf("%d",&n);
    int max;
    for(int i=1;i<=n;i++){
        scanf("%d",&s); 
        sum=sum+s;
        if(s>50){
            c++;
        }
    }
    printf("total errors:%d\n",sum);
    printf("No of critical hours:%d",c);
} 

   