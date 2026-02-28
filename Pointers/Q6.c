#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    int temp;
    int *q=&arr[a-1];
    for(int i=0;i<a/2;i++){
      temp=*(p+i);
      *(p+i)=*(q-i);
      *(q-i)=temp;
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}
