#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char arr[20];
    fgets(arr,sizeof(arr),stdin);
    char upper[20];
    for(int i=0;i<arr[i] != '\n' && arr[i] != '\0';i++){
       upper[i]=toupper(arr[i]);
    } 
    printf("%s",upper);
}
