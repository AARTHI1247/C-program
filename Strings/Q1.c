#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int count=0;
    for(int i=0;i<arr[i]!=0;i++){
            count++;
    }
    printf("%d",count-1);
    
}
