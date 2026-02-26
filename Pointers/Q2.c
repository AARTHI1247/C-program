#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    int max=*p;
    for(int i=1;i<a;i++){
        if(max<*(p+i)){
            max=*(p+i);
        }
    }
    printf("%d",max);
}
