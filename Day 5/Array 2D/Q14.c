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
    int max=0,sum=0,index=0;
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
            index=j;
        }
    }
    printf("%d",index);
}
