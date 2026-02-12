#include<stdio.h>
int main(){
    int n,s,high=0,c=0;
    scanf("%d",&n);
    int max;
    for(int i=1;i<=n;i++){
        scanf("%d",&s); 
        if(s>high){
            high=s;
        }
        if(s>100){
            c++;
        }
    }
    printf("maximum price:%d\n",high);
    printf("No of high price days:%d",c);
} 

   