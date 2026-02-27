#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int a2[a];
    int *p=arr;
    for(int i=0;i<a;i++){
       a2[i]=*(p+(a-1)-i); 
    }
    for(int i=0;i<a;i++){
        printf("%d ",a2[i]);
    }
}
