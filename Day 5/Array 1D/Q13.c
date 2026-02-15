#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int avg,count=0,sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    for(int i=0;i<n;i++){
        if(a[i]>avg){
            count++;
        }
    }
    printf("%d",count);

}
