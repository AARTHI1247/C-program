#include<stdio.h>
#include<string.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    int len=strlen(arr);
    for(int i=len;i>=0;i--){
        printf("%c",arr[i]);
    }
}
