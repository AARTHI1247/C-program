#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min;
    for(int i=0;i<n;i++){
        if(a[i]>0){
        min=a[i];
        break;
        }
        else if(a[i+1]>0){
            min=a[i+1];
            break;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            count++;
        }
    }
    if(count==0){
        printf("No positive");
        return 0;
    }
    else if(count>0){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
               if(a[i]<min && a[i]>0){
                  min=a[i];
               }
        }
     }
    }
     printf("%d",min);
     return 0;
}
