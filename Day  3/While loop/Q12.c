#include<stdio.h>
    int main(){
        int n;
        scanf("%d",&n);
        int i=0,count=0;
        int a,max=0;
        int max_new=0;
        while(i<n){
            scanf("%d",&a);
            if(a>5){              
                count++;
                max=a;
                if(max>max_new){
                    max_new=max;
                }
            }
            i++;
        }
        printf("Max Usage:%d\n",max_new);
        printf("Surge Hours:%d",count);
        
        return 0;
    }
   
