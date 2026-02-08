#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    int count=0;
    for (int i=1;i<n;i++) {
        if (min>a[i]){
            min=a[i];
        }
        else {
            count++;
            break;
        }
    }
    if (count==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}