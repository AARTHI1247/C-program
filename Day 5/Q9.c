#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ar[n];
    for(int i=0;i<n;i++){
        ar[i]=0;
    }
    int max=a[n-1];
        for(int i=0;i<n;i++){
        if(max<=a[n-1-i]){
           max=a[n-1-i];
           ar[i]=max;
        }
}
    for(int i=n-1;i>=0;i--){
        if(ar[i]!=0){
        printf("%d ",ar[i]);
        }
    }
    return 0;
}