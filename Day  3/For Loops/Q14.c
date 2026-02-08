#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int arr[a];
    for (int i=0;i<a;i++) {
        scanf("%d",&arr[i]);
    }

    int b;
    scanf("%d",&b);

    int arr2[b];
    for (int i=0;i<b;i++) {
        scanf("%d",&arr2[i]);a
    }

    int count = 0;

    for (int i=0;i<a;i++) {
        for(int j=0;j<b;j++){
            if (arr[i]==arr2[j]){
                count++;
            }
        }
    }

    if(count>0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
