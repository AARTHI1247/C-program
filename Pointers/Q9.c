#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int n;
    scanf("%d",&n);
    int *p=arr;
    int c=0;
    for(int i=0;i<a;i++){
        if(*(p+i)==n){
            printf("%d",i+1);
            c=1;
            break;
        }}
        if(c==0){
            printf("-1");
        }
    }
    
