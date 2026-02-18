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
    int value,count,name,dup;
    for(int i=0;i<a;i++){
        name=0,count=0,dup=0;
        for(int j=0;j<b;j++){
            value=arr[i][j];
            for(int k=j+1;k<b;k++){
                if(value==arr[i][k]){
                    dup=1;
                    break;
                }
            }
            if(dup==1){
                break;
            }           
        } 
         if(dup==0){
                name=i;
            }      
    }
    printf("%d",name);
}
