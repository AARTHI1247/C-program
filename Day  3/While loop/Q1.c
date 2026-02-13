#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
   for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        int i=0;
        while(a[i]>=70){
            c++;
            i++;
        }
        printf("%d",c);
    }
    
