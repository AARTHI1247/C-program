#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    fgets(arr,50,stdin);
    arr[strcspn(arr,"\n")]='\0';
    int len=strlen(arr);
    char arr2[50];
    fgets(arr2,50,stdin);
    arr2[strcspn(arr2,"\n")]='\0';
    int len2=strlen(arr2);
    for(int i=0;i<len2;i++){
        for(int j=0;j<len;j++){
            if(arr2[i]==arr[j]){
                arr[j]=0;
                break;
            }
        }
    }
    for(int i=0;i<len;i++){
        if(arr[i]!=0);
        printf("%c",arr[i]);
    }
}
