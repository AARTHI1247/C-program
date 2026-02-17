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
    int sum,a1[a];
    for(int i=0;i<a;i++){
        sum=0;
        for(int j=0;j<b;j++){
            sum=sum+arr[i][j];
        }
       a1[i]=sum;
    }
    int avg,a2[a];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            avg=a1[i]/b;
        }
        a2[i]=avg;
    }
    int min_avg=a2[0],name=0;
    for(int i=1;i<a;i++){
        if(min_avg>a2[i]){
            min_avg=a2[i];
            name=i;
        }
        else{
            name=0;
        }
    }
    printf("%d",name);
    return 0;
}
