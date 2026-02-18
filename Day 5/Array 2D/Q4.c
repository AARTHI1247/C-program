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
    
    for(int k=0;k<a;k++){
        for(int l=0;l<b;l++){
            
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    if(arr[k][l]==arr[i][j+1]){
                        printf("%d",arr[k][l]);
                        return 0;
                    }
                }
            }
        }   
    } 
}
