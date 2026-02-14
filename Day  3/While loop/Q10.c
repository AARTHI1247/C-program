#include<stdio.h>
    int main(){
        int weeks;
        scanf("%d",&weeks);
        int i=0,count=0;
        int a;
        while(i<weeks){
            scanf("%d",&a);
            if(a==0){              
                count++;
            }
            i++;
        }
        printf("Inactive Weeks:%d\n",count);
        if(count>=3){
            printf("Risk Status:High");
        }
        else if(count<3){
            printf("Risk Status:Low");
        }
        return 0;
    }
   
