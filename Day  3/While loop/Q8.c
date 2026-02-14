#include<stdio.h>
    int main(){
        int months;
        scanf("%d",&months);
        int i=0,count=0;
        int a,max_c=0;
        while(i<months){
            scanf("%d",&a);
            if(a==0){
                count++;
                if(count>max_c){
                    max_c=count;
                }
            }
            else{
                count=0;
            }
            i++;
        }
        printf("Longest Default Streak:%d\n",count);
        return 0;
    }
   
