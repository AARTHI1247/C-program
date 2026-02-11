#include<stdio.h>
int main(){
    int n,point=-1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int sum_left=0;
        int sum_right=0;
        for(int j=0;j<i;i++){
            sum_left=sum_left+a[j];
        }
        for(int j=i+1;j<n;i++){
            sum_right=sum_right+a[j];
        }
        if(sum_left==sum_right){
            point=a[i];
            break;
        }
    }
    printf("%d",point);
    return 0;
}