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
    int count=0,val=0,p_c;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            p_c=0;
            val=arr[i][j];
            if(val<=1){
                count=0;
                break;
            }
            for(int k=1;k<=val;k++){
                if(val%k==0){
                    p_c++;
                }
            } 
            if(p_c==2){
                count++;
            }         
        }
       
    }
    printf("%d",count);
}
