#include<stdio.h>
int main(){
    int amt;
    scanf("%d",&amt);
    int n,m;
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
            amt=amt-100;  
        } 
        printf("%d",amt);
        
    }
    else if(n==0){
        printf("%d",amt);
    }
}