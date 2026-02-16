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
    int count=0,cn=0;
    int min,max,saddle;
   for(int i=0;i<a;i++){
    min=arr[i][0];
    for(int j=1;j<b;j++){
        if(min>arr[i][j]){
            min=arr[i][j];
            cn=j;
        }
    }
     max=min;
     saddle=1;
    for(int k=0;k<a;k++){
        if(max<arr[k][cn]){
            saddle=0; 
            break;
        }
        }
    if(saddle==1){
        count++;
    }
}
printf("%d",count);
    return 0;
}
