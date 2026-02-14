#include<stdio.h>
    int main(){
        int weight;
        scanf("%d",&weight);
        int n;
        scanf("%d",&n);
        int i=0,count=0;
        int a,sum=0;
        while(i<n){
            scanf("%d",&a);
            sum=sum+a;
            if(sum<weight){               
                count++;
            }
            else{
                break;
            }
            i++;
        }
        printf("Passengers allowed:%d\n",count);
        if(sum<weight){
            printf("Overload:No");
        }
        else if(sum>weight){
            printf("Overload:Yes");
        }
        return 0;
    }
   
