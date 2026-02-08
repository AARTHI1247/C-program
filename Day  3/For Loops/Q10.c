#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr1[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr1[i]);
    }
    int b;
    scanf("%d",&b);
    int arr2[b];
    for (int i=0;i<b;i++) {
        scanf("%d",&arr2[i]);
    }
    int count=0;
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            if (arr1[i]==arr2[j]){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}