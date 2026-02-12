#include<stdio.h>
int main(){
    int n,s,sum=0,c=0;
    scanf("%d",&n);
    int avg;
    for(int i=1;i<=n;i++){
        scanf("%d",&s);
        sum=sum+s;    
        avg=sum/n;
        if(s<40){
            c++;
        }
    }
    printf("total average:%d\n",avg);
    printf("No of students below the average :%d",c);
} 

   