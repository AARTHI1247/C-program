#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr1[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr1[i]);
    }
    int count=0;
    int sum=0;
    float av;
    for (int i=1;i<a;i++) {
        for (int j=0;j<i;j++) {
            sum=sum+arr1[j];
            }
            av=sum/i;
            if (arr1[i]>av){
                count++;
        }
    }
     printf("%d\n",count);
    return 0;
}