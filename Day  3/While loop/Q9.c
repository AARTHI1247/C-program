#include<stdio.h>
    int main(){
        int fuel;
        scanf("%d",&fuel);
        int n;
        scanf("%d",&n);
        int i=0,count=0;
        int a,sum=0;
        while(i<n){
            scanf("%d",&a);
            sum=sum+a;
            if(sum<=fuel){              
                count++;
            }
            else{
                sum=sum-a;
                break;
            }
            i++;
        }
        int rem=fuel-sum;
        printf("Completed Trips:%d\n",count);
        printf("Remaining Fuel:%d\n",rem);
        return 0;
    }
   
