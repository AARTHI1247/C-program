#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==' '){
            arr[i]='-';
        }
    }
    for(int i=0;i<len;i++){
        printf("%c",arr[i]);
    }
}
