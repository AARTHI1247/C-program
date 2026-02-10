#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
           count++;
          }
    }
    if(count!=0){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}