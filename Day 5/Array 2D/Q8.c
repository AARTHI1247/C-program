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
    int sum,max=-999999;
    int limit_i=2,s_i=0;
    int s_j,limit_j;
    while(limit_i<=a){
       s_j=0,limit_j=2;
    while(limit_j<=b){
        sum=0;
    for(int i=s_i;i<limit_i;i++){
        for(int j=s_j;j<limit_j;j++){
            sum=sum+arr[i][j];
        }
    }
            if(sum>max){
                max=sum;
        }  
    s_j=s_j+1;
    limit_j=limit_j+1;  
}
    limit_i=limit_i+1;
    s_i=s_i+1;
}

    printf("%d",max);
   return 0;
}
