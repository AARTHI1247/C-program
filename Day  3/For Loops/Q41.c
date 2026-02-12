#include<stdio.h>
int main(){
    int n,s,sum=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&s);
        sum=sum+s;    
        if(s>100){
            c++;
        }
    }
    printf("total patients:%d\n",sum);
    printf("No of days overcrowded :%d",c);
} 

   