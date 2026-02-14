#include<stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int i=0,count=0;
        int a,sum=0;
        while(i<n){
            scanf("%d",&a);
            sum=sum+a;
            if(a>2){              
                count++;
            }
            i++;
        }
        printf("Total Delays:%d\n",sum);
        printf("Delayed Days :%d",count);
        
        return 0;
    }
   
