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
    int maxno,minno,max[a],min[a];
    for(int i=0;i<a;i++){
        maxno=arr[i][0];
            for(int j=0;j<b;j++){
                if(maxno<arr[i][j]){
                    maxno=arr[i][j];
                }
            }
            max[i]=maxno;
        }
    for(int i=0;i<a;i++){
        minno=arr[i][0];
            for(int j=0;j<b;j++){
                if(minno<0&& minno>arr[i][j]){
                    minno=arr[i][j];
                }
            }
            min[i]=minno;
    }
    int pd,max_p=0,min_p=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            pd=max[i]*max[j];
        }
        if(max_p<pd){
            max_p=pd;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            pd=min[i]*min[j];
        }
        if(min_p<pd){
            min_p=pd;
        }
    }
    if(max_p>min_p){
        printf("%d",max_p);
    }
    else{
        printf("%d",min_p);
    }
}
