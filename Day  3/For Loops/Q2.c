#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int count=1;
    int max=a[0];
    for (int i=1;i<n;i++){
            if (max<a[i]){
                max=a[i];
                count++;
            }
    }
    printf("%d",count);
    return 0;
}