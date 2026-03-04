#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    char arr2[50];
    for(int i=0;i<50;i++){
        arr2[i]=0;
    }
    int len=strlen(arr);
    int j=0;
    for(int i=0;i<len;i++){
        if(arr[i]!=' '){
            arr2[j]=arr[i];
            j++;
        }
        else{
            arr2[j]='\0';
            for(int i=strlen(arr2)-1;i>=0;i--){
                printf("%c",arr2[i]);
            }
            j=0;
            printf(" ");
        }
    }
    if(j>0){
        arr2[j]='\0';
        for(int i=strlen(arr2)-1;i>=0;i--){
            printf("%c",arr2[i]);
        }
    }
}

