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
    int count,max_c=0,value=0;
    for(int k=0;k<a;k++){
        for(int l=0;l<b;l++){
            arr[k][l];
            count=0;
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    if(arr[k][l]==arr[i][j]){
                        count++;
                    }
                }
            }
            if(count>max_c){
                max_c=count;
                value=arr[k][l];
            }
        }
    } 
    printf("%d",value);
    return 0;
}
