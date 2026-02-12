#include<stdio.h>
int main(){
    int n,s,min,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&s); 
        if(min>s){
            min=s;
        }
        if(s<210){
            c++;
        }
    }
    printf("Minimum voltage:%d\n",min);
    printf("No of low voltage:%d",c);
} 

   