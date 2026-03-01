#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int c=1;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
           if(arr[i]==arr[j]){
            arr[j]=0;
        }     
    }
    if(arr[i]!=0){
        printf("%c",arr[i]);
    }
}
}
