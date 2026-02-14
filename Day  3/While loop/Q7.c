#include<stdio.h>
    int main(){
        int capacity;
        scanf("%d",&capacity);
        int hours;
        scanf("%d",&hours);
        int exceeds=(capacity*90)/100;
        int i=0,count=0;
        int a,sum=0;
        while(i<hours){
            scanf("%d",&a);
            sum=sum+a;
            if(sum>exceeds){
                count++;
            }
            i++;
        }
        printf("Final Occupied Beds:%d\n",sum);
        printf("Critical Hours:%d\n",count);
        return 0;
    }
   
