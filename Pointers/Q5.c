#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int sum=0;
    for(int i=0;i<a;i++){
       sum=sum+*(p+i);
    }
        printf("%d",sum);
}
