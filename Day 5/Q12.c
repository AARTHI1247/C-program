#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum,c=0;
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==sum){
            printf("%d %d ",a[i],a[j]);
            c++;
            break;
          }
       }
       }
        if(c==0){
           printf("No pair");
           return 0;
    }
}