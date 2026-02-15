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
        ar[i]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                ar[i]=a[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
