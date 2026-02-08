#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
    }
    int count=1,max=1;
    for (int i=0;i<a;i++) {
            if (arr[i]<arr[i+1]){
                count++;
            }
            else{
                count=1;
            }
        if(count>max){
           max=count;
    }
    }
    printf("%d",max);
    return 0;
}
