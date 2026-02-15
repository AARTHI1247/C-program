#include<stdio.h>
    int main(){
        int i=0,count=0;
        int b;
        scanf("%d",&b);
        int a,sum=0;
        while(i<b){
            scanf("%d",&a);
            sum=sum+a;
            if(a>4){              
                count++;
            }
            
            i++;
        }
            printf("Total Overtime:%d\n",sum);
            printf("Burnout Days:%d",count);
        return 0;
    }
   
