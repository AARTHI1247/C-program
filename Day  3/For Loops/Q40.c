#include<stdio.h>
int main(){
    int n,s,sum=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&s);
        sum=sum+s;    
        if(s>2){
            c++;
        }
    }
    printf("total data:%d\n",sum);
    printf("No of data exceeds :%d",c);
} 

   