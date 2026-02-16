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
    int even,odd,count=0;
    for(int i=0;i<a;i++){
        even=0,odd=0;
        for(int j=0;j<b;j++){
            if(arr[i][j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even==odd){
        count++;
    }
    }
    printf("%d",count);
}
