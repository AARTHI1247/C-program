#include<stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int i=0,count=0;
        int b;
        scanf("%d",&b);
        int a,sum=0,sub;
        while(i<b){
            scanf("%d",&a);
            sum=sum+a;
            if(sum<n){              
                count++;
            }
            else{
                count=count+1;
                sub=sum-n;
                break;
            }
            i++;
        }
        if(sum<n){
            printf("Exhausted Day:Not Exhausted\n");
            printf("Overused Data:0");
        }
        else{
            printf("Exhausted Day:%d\n",count);
            printf("Overused Data:%d",sub);
        } 
        return 0;
    }
   
