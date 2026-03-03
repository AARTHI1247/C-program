#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    int max=0;
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
           if(arr[i]<arr[j]){
            max=arr[j];
           } 
        } 
    }
    printf("%c",max);
}
