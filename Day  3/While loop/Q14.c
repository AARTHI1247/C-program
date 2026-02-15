#include<stdio.h>
    int main(){
        int amt;
        scanf("%d",&amt);
        int i=0,count=0;
        int b;
        scanf("%d",&b);
        int a,sum=0,sub;
        while(i<b){
            scanf("%d",&a);
            sum=sum+a;
            if(sum<=amt){              
                count++;
            }
            else{
                sum=sum-a;
                sub=amt-sum;
                break;
            }
            i++;
        }
            printf("Successful Withdrawals:%d\n",count);
            printf("Remaining Cash:%d",sub);
        return 0;
    }
   
