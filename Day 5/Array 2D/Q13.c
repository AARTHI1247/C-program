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
    int count=0;
    for(int i=0;i<a;i++){
       int ispalindrome=0;
        for(int j=0;j<b;j++){
            if(arr[i][j]==arr[i][b-1-j]){
                ispalindrome=1;
            }
            else{
                ispalindrome=0;
            }
        }
        if(ispalindrome==1){
            count++;
        }
    }
    printf("%d",count);
}
