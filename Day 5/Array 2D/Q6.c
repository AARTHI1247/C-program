#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a1[a];
    int sum;
    for(int i=0;i<a;i++){
        sum=0;
        for(int j=0;j<b;j++){
            sum=sum+arr[i][j];
        }
        a1[i]=sum;
    }
    int max_s=a1[0];
    for(int i=1;i<a;i++){
        if(max_s<a1[i]){
            max_s=a1[i];
        }
    }
    
    int diff=0,a2[a];
    for(int i=0;i<a;i++){
       a2[i]=max_s-a1[i];
    }
    int max_d=a2[0];
    for(int i=1;i<a;i++){
        if(max_d<a2[i]){
            max_d=a2[i];
        }
    }
    printf("%d",max_d);
    return 0;
}
