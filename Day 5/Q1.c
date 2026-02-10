#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0],s_max;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++)
          if(max<a[i]){
            s_max=max;
            max=a[i];
          }
    }
    printf("%d %d",s_max,max);
    return 0;
}