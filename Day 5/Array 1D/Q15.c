#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int a1[n];
    int k=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            a1[k]=a[j];
              k++;
            }
        }   
    for(int i=0;i<n;i++){
        printf("%d ",a1[i]);
    }
    return 0;
}
