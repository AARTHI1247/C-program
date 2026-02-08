#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int count=0;
    int t;
    scanf("%d",&t);
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]+a[j]>=t){
                count++;
            }
        }
    }
   printf("%d",count);
    return 0;
}