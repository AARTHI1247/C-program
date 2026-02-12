#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    for(int i=2;i<=b;i++){
       if(i%3==0){
        sum=sum+i;
       }
    }
    printf("%d",sum);
}