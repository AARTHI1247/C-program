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
    int count=0,max=0,max_c=0;
    for(int i=0;i<a;i++){
        max_c=1;
        max=arr[i][0];
        for(int j=0;j<b;j++){
            if(max<arr[i][j]){
                max_c=0;
                break;
            } 
            else{
                max_c=1;
            } 
        }if(max_c==0){
                count++;
            }
    }
    printf("%d",count);
}
